#include <iostream>
using std::cin;
using std::cout;

void error_h(double &num) //cin error helper
{
  while (!num)
  {
    cout << "invalid input: try again: \n";
    cin.clear();
    cin.ignore(10000, '\n');
    cin >> num;
  }
}
int main()
{
  double max;
  double increment;
  cout << "Number to count to (or enter negative number to count down):\n";
  cin >> max; error_h(max);
  cout << "Count up or down by this number:\n";
  cin >> increment; error_h(increment);


  while (increment < 0)
  {
    cout << "Enter a positive number\n";
    cin.clear();
    cin.ignore(10000, '\n');
    cin >> increment; error_h(increment);
  }

  double i = 0;
  if (max > 0)
    while (i < max)
    {
      i = i + increment;
      cout << "\t" << i << "\n";
    }
  else if (max < 0)
  {
    while (i > max)
    {
      i = i - increment;
      cout << "\t" << i << "\n";
    }
  }
  system("pause"); // press any key to continue... instead of closing instantly (windows console only)
  return 0;
}
