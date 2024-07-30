#include <iostream>
struct object
{
    double length;
    double width;
};
double area(double length,double width)
{
    return length*width;
}
int main()
{
    object chode;
    chode.length = 1;
    chode.width = 1;
    std::cout<<area(chode.length,chode.width);
return 0;
}
