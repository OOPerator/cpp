#include <iostream>
#include <string>
#include <random>
#include <algorithm>


int main()
{
    std::string table{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
    std::random_device rnd;
    std::mt19937 gen(rnd());
    std::shuffle(table.begin(),table.end(),gen);
    int clamp = 4;
    for(int i=0;i<clamp;i++)
    {
        std::cout<<table[i];
    }
return 0;
}
