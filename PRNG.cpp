#include <iostream>
#include <random>
#include <cstdint>
using std::cout;
int64_t getrand(const int64_t &begin, const int64_t &end)
{
    static std::random_device RD;
    static std::mt19937 twister(RD());
    static std::uniform_int_distribution<int64_t> dist;
    dist.param(std::uniform_int_distribution<int64_t>::param_type(begin,end));
    return dist(twister);
}

int main()
{
  cout<<getrand(INT8_MIN,INT8_MAX)<<"\n";
  cout<<getrand(INT16_MIN,INT16_MAX)<<"\n";
  cout<<getrand(INT32_MIN,INT32_MAX)<<"\n";
  cout<<getrand(INT64_MIN,INT64_MAX)<<"\n";
  cout<<"dice roll: you landed a "<<getrand(1,6);
  return 0;
}
