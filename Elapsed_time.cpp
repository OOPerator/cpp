#include <iostream>
#include <chrono>
#include <thread>
void sleep(int ms)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    int n = 1;
    while(n<11)
    {
        std::cout<<n++<<"\n";
        sleep(1000);
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish-start;
    std::cout<<"time elapsed: "<<elapsed.count()<<" seconds";
}
