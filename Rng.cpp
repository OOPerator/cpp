#include <iostream>
#include <string>
#include <cstdlib>

int main ()
{
   srand(time(NULL));
   std::string chars = "abcdefghijklmnopqrstuvwrxyzABCDEFGHIJKLMNOPQRSTUVWRXYZ0123456789";
   int len = chars.length();
   int num_chars = 8;
   for(int i=0;i<num_chars;i++)
   {
       std::cout<<chars[rand()%len];
   }
   return 0;
}
