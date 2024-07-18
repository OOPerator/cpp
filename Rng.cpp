#include <iostream>
#include <vector>
#include <cstdlib>

int main ()
{
    srand(time(NULL));
    int digits = 6;
    std::vector<int> table = {};
    for (int i=0;i<digits;i++)
    {
        table.push_back(rand()%10);
    }
    for(int i=0;i<table.size();i++)
    {
        std::cout<<table[i];
    }
    return 0;
}
