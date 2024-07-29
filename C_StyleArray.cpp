#include <iostream>
using std::string;
void readarray(string array[],int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<array[i]<<"\n";
    }
}
int main()
{
    string table[] = {"orange","apple","mango","banana"};
    int len = sizeof(table)/sizeof(string);
    readarray(table,len);
    return 0;
}

