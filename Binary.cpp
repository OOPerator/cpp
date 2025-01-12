#include <iostream>
#include <bitset>
int main()
{
    int integer = 420;
    std::bitset<8>ToBinary(integer);
    std::cout<<ToBinary;
}
