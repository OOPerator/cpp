#include<iostream>
using std::cout;

void print() {
    cout<<"";  
}

template<typename T, typename...types>
void print(T text, types... args) {
  cout<<text<<'\n';
  print(args...);
}

int main()
{
   print('A',14.76f,850.9209,15,"Hello world!",true);
   
   return 0;
}
