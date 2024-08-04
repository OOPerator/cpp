#include <iostream>
#include <thread>
#include <chrono>
void sleep(int ms)
{
    using namespace std;
    this_thread::sleep_for(chrono::milliseconds(ms));
}
int main()
{
    int i = 1;
    while(i<11)
    {
        sleep(300);std::cout<<i++<<"\n";
    }
    return 0;
}
