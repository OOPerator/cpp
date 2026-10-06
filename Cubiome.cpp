#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cstdint>
#include <ctime>
using std::cout;
using std::cin;

int64_t r64(int64_t min, int64_t max) {
	thread_local std::mt19937_64 generator(std::random_device{}());
	std::uniform_int_distribution<int64_t> rand_inRange(min, max);
	return rand_inRange(generator);
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
		clock_t start, end;
		double time_elapsed;
		start = clock();
		std::ofstream outfile("out.txt");
		cout << "Please wait . . .\n";
		if (!outfile) {
			cout << "File could not be created.\n";
			return 1;
		}
		outfile.rdbuf()->pubsetbuf(buff.data(), writebuffsize);
			for (int i = 0; i < outputcount; ++i) {
				outfile << r64(INT64_MIN,INT64_MAX) << '\n';
			}
		end = clock();
		time_elapsed = (double) (end - start) / CLOCKS_PER_SEC;

		cout << "Operation completed in " << time_elapsed << " seconds.\n";
	}
	std::string pause;
	cout << "Press enter to exit . . .";
	std::getline(cin, pause);
	return 0;
}
