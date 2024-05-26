//write programe for table 
#include<iostream>
using namespace std;
int main()
{
    int n,i=1,t;
    cout<<"\nenter the no";
    cin>>n;
    while (i<=10)
    {
        t=n*i;
        cout<<"\ntable="<<t;
        i++;
    }
    return 0;
}