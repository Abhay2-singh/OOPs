//write a programme to overload uniary -- (decrement operator) using simple member function
#include<iostream>
using namespace std;
class demo{
    private :
    int x,y;
    public :
    void read(int i,int j)
    {
        x=i;
        y=j;
    }
    void show()
    {
        cout<<"\nx="<<x;
        cout<<"\ny="<<y;
    }
    void operator --()
    {
        --x;
        --y;
    }
};
int main()
{
    demo p;
    p.read(10,20);
    cout<<"\nbefore overloading=";
    p.show();
    cout<<"\nafter overloding=";
    --p;
    p.show();
    return 0;
}