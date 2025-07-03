#include <iostream>
#include <random>
#include <cstdint>
#include <chrono>
int main()
{
   unsigned seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
   std::mt19937 rng(seed);
   std::uniform_int_distribution<size_t> dist(0,UINT32_MAX);
   
   std::cout<<dist(rng);
   
  return 0;
}
