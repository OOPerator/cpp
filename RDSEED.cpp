#include <iostream>
#include <string>
#include <cstdint>
#include <immintrin.h>

using std::cout;
std::string errormsg = "Entropy exhausted, try again";
std::string promptmsg = "Press enter to generate a random 32 bit and 64 bit seed. Type any other key and then enter to clear screen. q to quit.\n";

int32_t random32() {
	uint32_t r32;
	for (int i = 0; i < 100; ++i) {
		if (_rdseed32_step(&r32))
			return static_cast<int32_t>(r32);
	}
	cout << errormsg; //does not need to return, will reset itself after entropy is restored.
}

int64_t random64() {
	uint64_t r64;
	for (int i = 0; i < 100; ++i) {
		if (_rdseed64_step(&r64))
			return static_cast<int64_t>(r64);
	}
	cout << errormsg;
}

int main()
{
	cout << promptmsg;
	while (true) {
		std::string entry;
		std::getline(std::cin, entry);
		if (entry.empty()) {
			cout << random32() << "\n" << random64() << "\n";
		}
		else if (entry == "q" || entry == "Q") {
			system("cls");
			break;
		}
		else if (entry == "spew") {
			for (int i = 0; i < 100; i++) {
				cout << random32() << "\n" << random64() << "\n\n";
			}
		}
		else {
			system("cls");
			cout << promptmsg;
		}
	}
	return 0;
}
