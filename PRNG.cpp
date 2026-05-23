#include <iostream>
#include <random>
#include <string>
#include <cstdint>
using std::cout;
using std::cin;

int64_t random(const int64_t &A, const int64_t &B)
{
	std::random_device seed;
	std::mt19937_64 twister(seed());
	std::uniform_int_distribution<int64_t> dist;
	dist.param(std::uniform_int_distribution<int64_t>::param_type(A,B));
	return dist(twister);
}

int main()
{
  start:
	cout << "Press enter to generate a random 32 bit and 64 bit seed. Type any other key and then enter to clear screen. q to quit\n";
	while (true) {
		std::string entry;
		std::getline(cin, entry);
		if (entry.empty()) {
			cout << random(INT32_MIN,INT32_MAX) << "\n" << random(INT64_MIN,INT64_MAX) << "\n";
		}
		else if (entry == "q" || entry == "Q") {
			system("cls");
			break;
		}
		else {
			system("cls");
			goto start;
		}
	}
	return 0;
}
