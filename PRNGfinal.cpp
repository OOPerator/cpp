#include <iostream>
#include <random>
#include <string>
#include <limits>

int64_t random(const int64_t A, const int64_t B)
{
	static thread_local std::mt19937_64 rng(std::random_device{}());
	std::uniform_int_distribution<int64_t> dist(A, B);
	return dist(rng);
}

int main()
{
	std::cout << "Press enter to generate a random 32 bit and 64 bit seed. Type any other key and then enter to clear screen. q to quit\n";
	while (true) {
		std::string entry;
		std::getline(std::cin, entry);
		if (entry.empty()) {
			std::cout << random(std::numeric_limits<int32_t>::min(), std::numeric_limits<int32_t>::max()) << "\n"
				<< random(std::numeric_limits<int64_t>::min(), std::numeric_limits<int64_t>::max()) << "\n";
		}
		else if (entry == "q" || entry == "Q") {
			system("cls");
			break;
		}
		else {
			system("cls");
			std::cout << "Press enter to generate a random 32 bit and 64 bit seed. Type any other key and then enter to clear screen. q to quit\n";
		}
	}
	return 0;	
}
