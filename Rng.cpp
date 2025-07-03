#include <iostream>
#include <random>
#include <cstdint>
int main()
{
   std::mt19937 rng(std::random_device{}());
   std::uniform_int_distribution<uint32_t> dist(0,UINT32_MAX);
   std::cout<<dist(rng);
    
  return 0;
}
