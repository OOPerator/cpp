#include <iostream>         
#include <vector>
#include <numeric>
int main()
{
    std::vector<double> table{20,40,60};
    double sum = std::accumulate(table.rbegin(),table.rend(),0);
    double avg = sum/table.size();
    if (sum==0) std::cout<<0; 
    else{std::cout<<avg;}
    return 0;
}
