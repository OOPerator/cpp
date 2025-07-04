#include <iostream>
#include <random>
#include <cstdint>
#include <chrono>
int main()
{
   unsigned seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
   std::mt19937 rng(seed);
   std::uniform_int_distribution<int64_t> randomint64(INT64_MIN,INT64_MAX);
   std::cout<<randomint64(rng)<<"\n";
  return 0;
}
