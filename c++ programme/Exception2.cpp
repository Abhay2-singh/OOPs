#include<iostream>
using namespace std;
int main()
{
    //try block
   try {
    throw 10;

    }
    catch(char*excp)
    {
        //catch block
        cout<<"\ncought="<<excp;
    }
    // catch all
    catch(...)
    {
        cout<<"\ndefualt exception=";
    }
    return 0;

}