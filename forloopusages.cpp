// This programm will add all the numbers from 0 to n
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter your integer number : ";
  cin >> n;
  int sum, i;
  sum = 0;
  for (i = 0; i <= n; i++)
  {
    sum = sum + i;
  }
  cout << sum;
  return 0;
}

Output:

Enter your integer number : 100
5050
