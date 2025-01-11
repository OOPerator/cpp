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
    
    string x = "99";
    string y = "100";
    cout<<x<<" "<<y<<"\n";
    swap(x,y);
    pause(3000);
    cout<<x<<" "<<y<<"\n";
    
    return 0;
}
