 #include<iostream>

//Half Pyramid after 180 degree rotation
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=1 ; i<=n;i++)
     {
        for(int j=1; j<=n ;j++)
         {
            if(j<= n-i){
                cout<<"   ";

            }else{
                cout<<" * ";
            }
         }
         cout<<endl;
     }
}
output:

Enter a Number : 6
                * 
             *  * 
          *  *  * 
       *  *  *  * 
    *  *  *  *  * 
 *  *  *  *  *  * 
