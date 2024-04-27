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
friend void operator ++(demo s)
{
    ++s.a;
    ++s.b;

}
};
int main()
{
    demo p;
    p.read(10,20);
    cout<<"\nbefore overloading=";
    p.show();
    cout<<"\nafter overloading=";
    ++p;
    p.show();
    return 0;
}

