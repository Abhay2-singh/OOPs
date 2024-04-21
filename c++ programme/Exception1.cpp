#include<iostream>
using namespace std;
int main()
{
    int x=-1;
    //some code
    cout<<"\nbefore try";

    try{
        cout<<"\ninside try";
        if(x<0)
        {
            throw x;
            //throw the exeception
            cout<<"\nafter throw never executed";
        }
    }

        //catch 
        catch(int )
        {
            cout<<"\ncatch caught";
        }
        cout<<"\nafter catch will be executed";
        return 0;
}