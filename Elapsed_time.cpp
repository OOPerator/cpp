#include <iostream>
#include <chrono>
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    int count = 0;
    while(count<1000000000)
    {
        count++;
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> time_elapsed = finish-start;
    std::cout<<time_elapsed.count()<<"\n";
    return 0;
}
