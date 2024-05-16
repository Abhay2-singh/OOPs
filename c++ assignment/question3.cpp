// . Write a function using reference variables as arguments to swap the values of a pair of integers.//
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}
int main()
{
    int num1,num2;
    cout<<"\nenter the first number";
    cin>>num1;
    cout<<"\nenter the second number";
    cin>>num2;
    cout<<"\nswapping of first number="<<num1;
    cout<<"\nswapping of second  number="<<num2;
    swap(num1,num2);
    cout<<"\nafter swapping of first number="<<num1;
    cout<<"\nafter swapping of second number="<<num2;
    return 0;
}
 