#include <iostream>
template<typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    double a = 10;
    double b = 20;
    swap(a,b);
    std::cout<<a<<"\n"<<b;
}
