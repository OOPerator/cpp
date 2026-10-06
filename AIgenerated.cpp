#include <chrono>
#include <fstream>
#include <iostream>
#include <random>
#include <string>

// Correct thread-safe PRNG without random_device re-construction overhead
uint64_t r64() {
    thread_local std::mt19937_64 generator([] {
        std::random_device rd;
        return rd();
    }());
    return generator(); // Generates full 64-bit random distribution cleanly
}

int main() {
    constexpr size_t output_count = 100'000'000; // Single-quote digit separators (C++14)

    std::cout << "Write RNG results to text file in this location? (y/n)\n";
    std::string entry;
    if (!std::getline(std::cin, entry) || (entry != "y" && entry != "Y")) {
        return 0;
    }

    std::cout << "Please wait . . .\n";

    // High-resolution wall-clock timer (<chrono>)
    const auto start_time = std::chrono::steady_clock::now();

    std::ofstream outfile("out.txt");
    if (!outfile) {
        std::cerr << "File could not be created.\n";
        return 1;
    }

    // Fast string buffer loop
    std::string chunk_buffer;
    chunk_buffer.reserve(64 * 1024);

    for (size_t i = 0; i < output_count; ++i) {
        chunk_buffer += std::to_string(r64());
        chunk_buffer += '\n';

        // Flush batch buffer to disk periodically
        if (chunk_buffer.size() >= 32 * 1024) {
            outfile << chunk_buffer;
            chunk_buffer.clear();
        }
    }
    // Flush remaining buffer
    if (!chunk_buffer.empty()) {
        outfile << chunk_buffer;
    }

    const auto end_time = std::chrono::steady_clock::now();
    const std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << "Operation completed in " << elapsed.count() << " seconds.\n";

    std::cout << "Press Enter to exit . . .";
    std::string pause;
    std::getline(std::cin, pause);

    return 0;
}
