//write a programe for addition of two no using template (diff data types)
#include<iostream>
using namespace std;
template<class T1,class T2>
class addition 
{
    T1 a;
    T2 b,c;
    public :
    addition(T1x , T2y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        c=a+b;
        cout<<"\\naddition is="<<c;
    }
};
int main()
{
    addition<int,float>x(12,1.0);
    x.show();
    return 0;
}
