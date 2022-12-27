// Creating a Simple Calculator using SWITCH

#include <iostream>
using namespace std;
int main()
{
    double a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    char op;
    cout << "Enter operator : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;

    default:
        cout << "Invalid Operator" << endl;
        break;
    }
    return 0;
}

OUTPUT:

Enter two numbers : 5 -3
Enter operator : -
8
