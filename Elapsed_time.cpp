#include <iostream>
#include <chrono>
#include <thread>

void sleep(int ms)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

int main()
{
    int n = 0;
    int count_to = 1000000000;
    auto start = std::chrono::high_resolution_clock::now();
    while(n<count_to)
    {
        n++;
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish-start;
    std::cout<<"It took "<<elapsed.count()<<" seconds to count to "<<count_to;
}
