// Do while loop

/*The difference b/w Do while loop and a while loop is DO-While loop runs 
atleast for one time */
// A do while loop first excute the function and then check the condition
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a positive integer  : ";
  cin >> n;
  do
  {
    cout << "Your number was :" << n << endl;
    cout << "Enter a new positive num : ";
    cin >> n;
  } while (n > 0);

  return 0;
}
Output 1:
Enter a positive integer  : 30
Your number was :30
Enter a new positive num : 69
Your number was :69
Enter a new positive num : -30

output 2 :

Enter a positive integer  : -30
Your number was :-30
Enter a new positive num : -30
PS C:\Users\babor\OneDrive\Desktop\CPP> 
