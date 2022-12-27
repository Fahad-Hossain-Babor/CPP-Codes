// Taking Input from the user and saying hello to them

#include <iostream> //using header file that contains standard input & output
using namespace std;
int main()
{
  string name;
  cout << "Enter your name : "; // Asking them their name.
  cin >> name;                  // Storing name in the "name" variable
  cout << "Hello " << name;
  return 0;
}

Output :

Enter your name : Fahad
Hello Fahad
