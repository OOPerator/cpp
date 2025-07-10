#include <iostream>
#include <random>
#include <chrono>
#include <cstdint>
#include <string>
using std::cout;
using std::cin;
int64_t random(const int64_t &A, const int64_t &B)
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	//std::random_device rd;
	static std::mt19937_64 twister(seed);
	static std::uniform_int_distribution<int64_t> dist;
	dist.param(std::uniform_int_distribution<int64_t>::param_type(A,B));
	return dist(twister);
}

int main(void)
{
	std::string enter;
	cout << "Press enter to generate a random 32 bit and 64 bit seed. Type c and then enter to clear screen.\n";
	while (std::getline(cin, enter))
	{
		cout << random(INT32_MIN, INT32_MAX) << "\n" << random(INT64_MIN, INT64_MAX)<<"\n";
		if (enter == "c") {
			system("cls");
		}
	}
		return 0;
}
