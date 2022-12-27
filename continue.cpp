 // This simple program check if the number

// is divisible by three or not (one to Hundred)
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 != 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
