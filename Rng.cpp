#include <iostream>
#include <vector>
#include <cstdlib>

int main ()
{
    srand(time(NULL));
    std::vector<char>table{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','r','x','y','z'};
    for (int i=0;i<table.size();i++)
    {
      std::cout<<table[rand()%table.size()];
    }
    return 0;
}
