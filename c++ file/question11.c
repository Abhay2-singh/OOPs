/*Print the following patterns using loop :
a.
*
**
***
****
b.
   *  
 *** 
*****
 *** 
   *  
c.
1010101
 10101 
  101  
   1   */
#include<iostream>
using namespace std;
int main()
{
    cout<<"patter:a"<<endl;   //pattern : a
    for(int i=1; i<=4; i++)
    {
    for(int j=1; j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;


    //pattern b
}