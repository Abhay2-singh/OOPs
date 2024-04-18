/*Write a C++ program to calculate factorial of a number.*/
#include<iostream>
using namespace std;
int main()
{
  int n,i=1,fact=1;
  cout<<"\nenter a no";
  cin>>n;
  while(i<=n)
  {
    fact=fact*i;
    cout<<"\nfactorial="<<fact;
  }
  return 0;
}