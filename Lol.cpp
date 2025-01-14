#include <iostream>
#include <float.h>
using namespace std;

template<typename anything>
void print(anything you_want)
{
    cout<<you_want<<"\n";
}
int main()
{
    print(23);
    print(56.24f);
    print("skibidi toilet rizzler");
    print(false);
    print('$');
    print(DBL_MAX);
    
    return 0;
}
