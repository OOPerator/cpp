#include <iostream>
#include <thread>
#include <chrono>
void sleep(int MS)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(MS));
}
int main()
{
    int count = 1;
    while(count<21)
    {
        sleep(500);
        std::cout<<count++<<"\n";
    }
}
