//write programe of function over-riding
#include<iostream>
using namespace std;
class car
{
    public :
    void change_gear()
    {
        cout<<"\nbase change gear";
    }
};
class sportscar : public car{
    public :
    void change_gear()
    {
        cout<<"\nderived change gear";
    }
};
int main()
{
    sportscar  d;
    d.change_gear();
    return 0;
}
