#include <iostream>
using namespace std;
int main()
{
  double a, b, c;
  cout << "Enter 3 numbers : ";
  cin >> a >> b >> c;
  if (a > b)
  {
    if (a > c)
    {
      cout << a << " is the largest number";
    }
    else
    {
      cout << c << " is the largest number";
    }
  }
  else
  {
    if (b > c)
    {
      cout << b << " is the largest number";
    }
    else
    {
      cout << c << " is the largest number";
    }
  }
  return 0;
}

Output:

Enter 3 numbers : 69 6969 696969
696969 is the largest number
