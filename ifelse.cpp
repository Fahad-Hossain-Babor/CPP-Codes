 //This video covers about IF ELSE Statement.

#include <iostream>
using namespace std;
int main()
{
  int savings;
  cout << "Enter your savings : ";
  cin >> savings;
  if (savings > 5000)
  {
    if (savings > 10000)
    {
      cout << "Go road trip with Neha";
    }
    else
    {
      cout << "Go for shopping with Neha";
    }
  }
  else if (savings > 2000)
  {
    cout << "Date with Rashmi" << endl;
  }
  else
  {
    cout << "Friends is the savior" << endl;
  }
  return 0;
}
