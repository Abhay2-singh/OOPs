/*Write a program to read 2 numbers from the keyboard and display the larger value on the screen.*/
#include<iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"\nenter the first number";
cin>>num1;
cout<<"\nenter the second number";
cin>>num2;
if(num1>num2)
{
    cout<<"\nit is large number";
}
else{
    cout<<"\nnot a large number";
}
return 0;
}
