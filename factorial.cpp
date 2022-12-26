#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the num for factorial: ";
    cin>>num;
    int factorial = 1;
    for(int i=2;i<=num; i++){
        factorial = factorial * i;
    }

    cout<<"The ans is: "<<factorial<<endl;
    return 0;
}