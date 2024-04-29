//write a programme of multi level inheritance 
#include<iostream>
using namespace std;
class m
{
    public :
    int m;
    public :
    void get_m(int i)
    {
        m=i;

    }
};
class n
{
    public :
    int n;
    void get_n(int j)
    {
        n=j;
    }
   
};
class derived : public m,public n
{
        public :
        void show()
    {
        cout<<"\nm="<<m;
        cout<<"\nn="<<n;
        cout<<"\nm*n="<<m*n;
    }
};
int main()
{
    derived d;
    d.get_m(10);
    d.get_n(20);
    d.show();
    return 0;

}