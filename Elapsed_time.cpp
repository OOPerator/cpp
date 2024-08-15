#include <iostream>
#include <chrono>
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    int n = 0;
    while(n<1000000000){n++;}
    auto ended = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = ended-start;
    std::cout<<elapsed.count();
}
