#include <iostream>
#include <string>
#include <cstdlib>
using std::cout;
using std::string;

int main ()
{
    srand(time(NULL));
    string table
{"abcdefghijklmnopqrstuvwrxyzABCDEFGHIJKLMNOPQRSTUVWRXYZ0123456789"};
    int len = table.length();
    int chars = 10;
    for (int i=0;i<chars;i++)
    {
        cout<<table[rand()%len];
    }
return 0;
}
