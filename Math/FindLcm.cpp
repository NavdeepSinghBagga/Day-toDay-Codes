// C++ program to find LCM
#include<iostream>
using namespace std;
int main()
{
  // declare variables
  int num1, num2, max;

  // take input
  cout << "Enter two Integers: ";
  cin >> num1 >> num2;

  // maximum value between num1 and num2
  max = (num1 > num2) ? num1 : num2;
  //Assuming Maximum number to be the LCM for now
  
  //starting lcm check from the highest number among two given numbers

  while(true)
  {
      // if the number is divisible by both, then its lcm
    if(max % num1 == 0 && max % num2 ==0)
    {
      cout << "LCM = " << max << endl;
      break;
    }
    else
      max++;   //increasing the number to reach the condition for lcm
  }

  return 0;
}