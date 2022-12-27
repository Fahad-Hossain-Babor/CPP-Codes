// This is a simple while loop program. 

This loop takes input until the user gives a negative integer

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a positive integer number : ";
  cin >> n;
  while (n > 0)
  {
    cout << "Your number was :" << n << endl;
    cout << "Enter a new positive integer number : ";
    cin >> n;
  }
  return 0;
}
output: 
Enter a positive integer number : 89
Your number was :89
Enter a new positive integer number : 63
Your number was :63
Enter a new positive integer number : -30
