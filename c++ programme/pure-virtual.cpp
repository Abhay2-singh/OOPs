//write a programme of pure virtual function 
#include<iostream>
using namespace std;
class shape
{
    public :
    virtual float area(int)=0;

};
class circle :public shape
{
    public :
     float area (int r)
     {
        return(3.14*r*r);
     }
};
class square : public shape 
{
    public :
    float area(int s)
    {
        return(s*s);
    }
};
int main()
{
    circle cd;
    cout<<"\narea of circle="<<cd.area(2);
    square sq;
    cout<<"\narea of square="<<sq.area(5);
    return 0;

}

