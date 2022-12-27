 // printing a rectange

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
            cout << " * "; //Addning two spaces before and last for
                             extra space
        }
        cout << endl;
    }
    return 0;
}

output: 

Enter the numbers of row and col : 5 3
 *  *  * 
 *  *  * 
 *  *  * 
 *  *  * 
 *  *  * 
