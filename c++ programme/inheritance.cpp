//write programme of single inheritance 
#include<iostream>
using namespace std;
class demo {
    private :
    int a;
    public :
    int b;
    void get_ab(int i,int j)
    {
        a=i;
        b=j;
    }
    int get_a()
    {
        return (a);
    }
    void show()
    {
        cout<<"\na="<<a<<endl;
        cout<<"\nb="<<b<<endl;
    }
};
class derived : public demo
{
    int c;
    public :
    void mult()
    {
        c=b*get_a();
    }
    void display()
    {
        cout<<"\na="<<get_a();
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
    }
};
int main()
{
    derived d;
    d.get_ab(10,20);
    d.show();
    d.mult();
    d.display();
    return 0;
}