/*Write a C++ program to print an int, a double and a char on screen.*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    double b;
    char c;
    cout<<"\nenter the value of int,double and char=";
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"int ="<<a<<"\ndouble ="<<b<<"\nchar="<<c;
    return 0;
}