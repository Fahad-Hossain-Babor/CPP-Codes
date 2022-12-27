 // printing a hollow rectange

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the numbers of row and col : ";
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << " * "; // for extra space
            }
            else
            {
                cout << "   "; /* using three spaces for cope up with
                                 the extra space condition*/
            }
        }
        cout << endl;
    }
    return 0;
}

output:

Enter the numbers of row and col : 9 4
 *  *  *  * 
 *        * 
 *        * 
 *        * 
 *        * 
 *        * 
 *        * 
 *        * 
 *  *  *  *
