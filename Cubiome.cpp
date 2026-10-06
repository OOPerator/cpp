#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <chrono>
#include <random>
#include <cstdint>
using std::cout;
using std::cin;

int64_t r64(const int64_t min, const int64_t max)
{
	static thread_local std::random_device rd;
	static thread_local std::mt19937_64 generator(rd());
	std::uniform_int_distribution<int64_t> rand(min, max);
	return rand(generator);
}

int main()
{
	int outputcount = 100000000;
	size_t writebuffsize = 64 * 1024;
	std::vector<char> buff(writebuffsize);
	std::string entry;
	cout << "Write RNG results to text file in this location? y/n\n";
	std::getline(cin, entry);
	if (entry == "y" || entry == "Y") {
		auto start = std::chrono::high_resolution_clock::now();
		std::ofstream outfile("out.txt");
		cout << "Please wait . . .\n";
		if (!outfile) {
			cout << "File could not be created.\n";
			return 1;
		}
		outfile.rdbuf()->pubsetbuf(buff.data(), writebuffsize);
		for (int i = 0; i < outputcount; ++i) {
			outfile << r64(INT64_MIN, INT64_MAX) << '\n';
		}
		auto finish = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> elapsed = finish - start;
		cout << "Operation completed in " << elapsed.count() << " seconds.\n";
	}
	std::string pause;
	cout << "Press enter to exit . . .";
	std::getline(cin, pause);
	return 0;
}
