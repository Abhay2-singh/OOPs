//write a programme of operator overlaoding using friend function
#include<iostream>
using namespace std;
class demo
{
    private :
    int a,b;
    public :
    void read(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
    }
    friend operator --(demo s)
    {
        --s.a;
        --s.b;
    }
};
int main()
{
    demo p;
    p.read(5,6);
    cout<<"\nbefore overlaoding=";
    p.show();
    cout<<"\nafter overlaoding=";
    --p;
    p.show();
    return 0;
}