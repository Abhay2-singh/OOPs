#include<iostream>
using namespace std;
 int division(int a,int b)
    {
        if(b==0)
        {
            throw"division by zero condition!";
        }
        return (a/b);
    }
    int main()
    {
        int x=50;
        int y=0;
        double z=0;
        try{
            z=division(x,y);
            cout<<z<<endl;
        }
        catch(const char*msg)
        {
            cout<<msg<<endl;
        }
        return 0;
    }