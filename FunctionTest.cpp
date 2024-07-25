#include <iostream>
#include <vector>
using std::cout;
using std::vector;
void put_string(vector<std::string> &str,std::string data)
{
    for (int i=0;i<sizeof(char);i++)
    {
        str.push_back(data);
    }
}
int main()
{
    vector<std::string> table;
    put_string(table,"0123456789");
    for (auto i:table)
    {
        cout<<i;
    }
    cout<<"\n"<<table[0];
return 0; //identical output^
}
