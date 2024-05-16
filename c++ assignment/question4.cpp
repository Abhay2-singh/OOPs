#include<iostream>
using namespace std;
 int larger(int a,int b,int c)
{
    
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
int main()
{
    int n1,n2,n3;
    cout<<"\nenter the no";
    cin>>n1>>n2>>n3;
    cout<<"\nthe largest number is="<<larger;
    return 0;
}