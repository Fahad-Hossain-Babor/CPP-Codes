// Checking a number is prime or not.
// Efficient method.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime" << endl;
    }

    return 0;
}

Output : 

Enter a number: 69
Not Prime
