/*Find all the prime numbers in a given range*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, n, i;
    cout << "Enter your range : ";
    cin >> a >> b;
    for (n = a; n <= b; n++)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not prime." <<endl;
                break;
            }
            if(i==n)
            {
                cout << n << " is prime."<<endl;
            }
        }
    }
    return 0;
}
output :
Enter your range : 5 10 
6 is not prime.
8 is not prime.
9 is not prime.
10 is not prime.
