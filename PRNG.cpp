#include <iostream>
#include <random>
#include <chrono>
#include <cstdint>
#include <string>
using std::cout;
using std::cin;
//void cls() {for (int i=0;i<100;++i) cout<<'\n';}

int64_t random(const int64_t &A, const int64_t &B)
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	//std::random_device rd;
	static std::mt19937_64 twister(seed);
	static std::uniform_int_distribution<int64_t> dist;
	dist.param(std::uniform_int_distribution<int64_t>::param_type(A,B));
	return dist(twister);
}

int main()
{
	cout << "Press enter to generate a random 32 bit and 64 bit seed. Type any other key and then enter to clear screen.\n";
	while (true)
	{
		std::string entry;
		std::getline(cin, entry);
		if (entry.empty()) {
			cout << random(INT32_MIN, INT32_MAX) << "\n" << random(INT64_MIN, INT64_MAX) << "\n";
		}
		else if (entry == "q") {
			system("cls");
			break;
		}
		else {
			system("cls");
			cout << "Press enter to generate a random 32 bit and 64 bit seed. Type any other key and then enter to clear screen.\n";
		}
	}
		return 0;
}
