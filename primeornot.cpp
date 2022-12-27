 /*Checking if a number is prime or not*/

#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter a number : ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "The number " << n << " is not a prime" <<endl;
            break;
        }
        if(i==n)
        {
            cout << "The number is a prime number.";
            
        }
    }
    return 0;
}

Output:
Enter a number : 5
The number is a prime number.
