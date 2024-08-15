#include <iostream>
#include <chrono>
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    int n = 0;
    while(n<INT_MAX){n++;}
    auto ended = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = ended-start;
    std::cout<<n<<"\n"<<elapsed.count();
}
