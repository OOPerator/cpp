#include <iostream>
#include <string>
#include <random>
#include <algorithm>
int main()
{
    std::string table{"01234567890123456789"};
    std::random_device rnd;
    std::mt19937 gen(rnd());
    std::shuffle(table.begin(),table.end(),gen);
    int clamp = table.length();
    for(int i=0;i<clamp;i++)
    {
        std::cout<<table[i];
    }
return 0;
}
