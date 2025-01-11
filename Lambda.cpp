#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main()
{
    auto pause = [](int ms)
    {
        this_thread::sleep_for(chrono::milliseconds(ms));
    };
    
    auto swap = [](string &a, string &b)
    {
        string placeholder;
        placeholder = a;
        a = b;
        b = placeholder;
    };
    
    string x = "world";
    string y = "boy";
    swap(x,y);
    pause(5000);
    cout<<x<<" "<<y;
    
    return 0;
}
