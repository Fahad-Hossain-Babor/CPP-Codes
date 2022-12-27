// Reverse A number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a num: ";
    cin >> n;
    int reverse = 0, lastdigit;
    while (n > 0)
    {
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << reverse << endl;
    return 0;
}
Output:

Enter a num: 540
45

Enter a num: 6969
9696
