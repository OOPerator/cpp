#include <iostream>
#include <thread>
#include <chrono>
void sleep(int ms)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
int main()
{
    for (int i=0;i<21;i++) {sleep(300); std::cout<<i<<"\r";}
    return 0;
}
