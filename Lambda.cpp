#include <iostream>
using std::string;
int main()
{
    auto swap = [](string &a, string &b)
    {
        string placeholder;
        placeholder = a;
        a = b;
        b = placeholder;
    };
    
    string x = "door ";
    string y = "boy ";
    swap(x,y);
    std::cout<<y<<x;
    return 0;
}
