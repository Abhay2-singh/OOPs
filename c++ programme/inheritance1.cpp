//write a programme of single inheritance(inherit privately )
#include<iostream>
using namespace std;
class demo
{
    private :
    int a;
    public :
    int b;
    void get_ab()
    {
        cout<<"\nenter a no";
        cin>>a>>b;
    }
    int get_a()
    {
        return (a);
    }
    void show()
    {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
    }
};
class derived : private demo 
{
    int c;
    public :
    void mult()
    {
        get_ab();
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
    d.mult();
    d.display();
    return 0;

}