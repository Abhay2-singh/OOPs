//write a programe for factorial 
#include<iostream>
using namespace std;
int main()
{
    int n,i=1,fact=1;
    cout<<"\nenter a number";
    cin<<n;
    while (i<=n)
    {
       fact=fact*i;
       cout<<"\nfactorial="<<fact;
       i++;  
    }
    return 0;
}