/*Take values of length and breadth of a rectangle from user and check if it is square or not.*/
#include<iostream>
using namespace std;
int main()
{
    int lenght,breadth;
    cout<<"\nenter the lenght=";
    cin>>lenght;
    cout<<"\nenter the breadth=";
    cin>>breadth;
    if(lenght==breadth)
    {
        cout<<"\nit is square";
    }
    else{
        cout<<"\nit is rectangle";
    }
}