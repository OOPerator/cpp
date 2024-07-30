#include <iostream>
#include <vector>
double vsum(std::vector<double> v)
{
    double sum = 0;
    for (int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    return sum;
}
int main()
{
    std::vector<double> table{50,50,50};
    std::cout<<vsum(table)<<"\n";
    double avg = vsum(table)/table.size();
    std::cout<<avg;
    return 0;
}
