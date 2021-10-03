
/******************** Method 1: (Basic Method using while loop) ****************/


#include <iostream>
using namespace std;
int main()
{
int m,n;
 cout<<"Enter two numbers "<<endl;
 cin>>m>>n;
while(m!=n)
 {
 if(m>n)
 m=m-n;
 else
 n=n-m; 
 }
 cout<<"GCD is "<<m;
return 0;
}


// other two methods are commented below.. just comment out them and use 

// DELETE LINE NUMBER 27 AND 93 TO SEE OTHER METHODS
/*     





// ############### Method 2: Recursive function to return gcd of a and b 

#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

// Driver program to test above function
int main()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}










//####### Method 3: Using gcd function from algorithm Library 


#include <iostream>
#include <algorithm>
using namespace std;


  int main()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"HCF of "<<a<<" and "<<b<<" is: "<<__gcd(a,b);
    return 0;
}



*/