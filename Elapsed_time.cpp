#include <iostream>
#include <chrono>
int main()
{
    using namespace std;
    auto start = chrono::high_resolution_clock::now();
    int count = 0;
    while(count<1000000000)
    {
        count++;
    }
    auto finish = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = finish-start;
    cout<<elapsed.count();
    return 0;
}
