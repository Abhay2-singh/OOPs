//write a programme of method hiding 
#include<iostream>
using namespace std;
class vikash 
{
    public :
    void show()
    {
        cout<<"\nvikash show";
    }
};
class akash : public vikash
{
    public :
    void show(int a)
    {
        cout<<"\nakash show,a="<<a;
    }
};
int main()
{
    akash p;
    p.show(10);
    return 0;
}
