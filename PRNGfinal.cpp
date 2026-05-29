#include <iostream>
#include <random>
#include <string>
#include <limits>

int64_t random_int(int64_t A, int64_t B)
{
	static thread_local std::mt19937_64 rng(std::random_device{}());
	std::uniform_int_distribution<int64_t> dist(A, B);
	return dist(rng);
}

void clear_screen()
{
#ifdef _WIN32
	std::system("cls");
#else
	std::system("clear");
#endif
}

int main()
{
start:
	std::cout << "Press enter to generate a random 32 bit and 64 bit seed. Type any other key and then enter to clear screen. q to quit\n";
	while (true) {
		std::string entry;
		std::getline(std::cin, entry);

		if (entry.empty()) {
			std::cout << random_int(std::numeric_limits<int32_t>::min(),
				std::numeric_limits<int32_t>::max()) << "\n";

			std::cout << random_int(std::numeric_limits<int64_t>::min(),
				std::numeric_limits<int64_t>::max()) << "\n";
		}
		else if (entry == "q" || entry == "Q") {
			clear_screen();
			break;
		}
		else {
			clear_screen();
			goto start;
		}
	}
	return 0;
}
