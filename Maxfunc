#include <iostream>
#include <vector>
double largest(std::vector<double> v)
{
    double min = v[0];
    double max = v[0];
    for (int i=1;i<v.size();i++)
    {
       if(v[i]<min) {min = v[i];}
       if(v[i]>max) {max = v[i];}
    }
    return max;
}
int main()
{
    std::vector<double> table{-12,57,128,-100,80,478};
    std::cout<<largest(table);
}
