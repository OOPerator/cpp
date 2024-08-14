#include <iostream>
#include <chrono>
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    int n = 0;
    while(n<1000000000)
    {
        n++;
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish-start;
    std::cout<<elapsed.count();
}
