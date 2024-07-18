#include <iostream>
#include <string>
#include <cstdlib>

int main ()
{
   srand(time(NULL));
   std::string chars = "abcdefghijklmnopqrstuvwrxyz";
   int len = chars.length();
   for(int i=0;i<len;i++)
   {
       std::cout<<chars[rand()%len];
   }
}
