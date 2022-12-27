#include <iostream>
using namespace std;
int main()
{
  int pocketmoney = 5000; // Variable declatation and intialisation
  for (int date = 1; date <= 30; date++)
  {
    if (date % 2 == 0)
    {
      continue;
    }
    if (pocketmoney == 0)
    {
      break;
    }
    cout << "Today is date : " << date << "; You can go out Neha " << endl;
    pocketmoney = pocketmoney - 400;
  }
  return 0;
}

output : 
Today is date : 1; You can go out Neha 
Today is date : 3; You can go out Neha 
Today is date : 5; You can go out Neha 
Today is date : 7; You can go out Neha 
Today is date : 9; You can go out Neha 
Today is date : 11; You can go out Neha 
Today is date : 13; You can go out Neha 
Today is date : 15; You can go out Neha 
Today is date : 17; You can go out Neha 
Today is date : 19; You can go out Neha 
Today is date : 21; You can go out Neha 
Today is date : 23; You can go out Neha 
Today is date : 25; You can go out Neha
Today is date : 27; You can go out Neha
Today is date : 29; You can go out Neha
