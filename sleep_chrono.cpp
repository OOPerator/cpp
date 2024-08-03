#include <iostream>
#include <thread>
#include <chrono>
void sleep(int ms)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
int main()
{
    int count = 1;
    do
    {
        sleep(100);
        std::cout<<count++<<"\n";
    }
    while(count<21);
    return 0;
}
