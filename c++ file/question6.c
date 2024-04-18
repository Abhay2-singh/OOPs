/*Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.*/
#include<iostream>
using namespace std;
int main()
{
    int r;
    float pi=3.14;
    cout<<"\nnenter the radius";
    cin>>r;
    cout<<"\narea of circle="<<pi*r*r;
    cout<<"\nperimeter of circle="<<2*pi*r;
    return 0;
}