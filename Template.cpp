#include <iostream>
using namespace std;

template<typename N>
void swap_out(N &value0, N &value1)
{
    N placeholder = value0;
    value0 = value1;
    value1 = placeholder;
}
    
int main()
{
    int a(20),b(10);
    swap_out(a,b);
    cout<<a<<" "<<b<<"\n";
    string x("I am"),y("Yoda");
    swap_out(x,y);
    cout<<x<<" "<<y<<"\n";
    return 0;
}
