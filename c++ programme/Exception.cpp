//programme of Exception
#include<iostream>
#include <stdexcept>
using namespace std;
int main()
{
    //try block
    try{
        int numerator =10;
        int denominator =0;
    int result;
    // if denominator is 0 throw run time error
    if(denominator==0)
    {
        throw runtime_error("Division by zero not allowed!");
    }
    //there is no exception
    result=numerator/denominator;
    cout<<"\nresult after division ="<<result;
}
// catch block to catch the throw exception
catch(const exception& e)
{
    cout<<"\nexception="<<e.what()<<endl;
}
return 0;
}