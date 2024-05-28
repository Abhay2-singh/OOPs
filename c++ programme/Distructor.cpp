//write a prograame for disrtuctor 
#include<iostream>
using namespace std;
int count=0;
class vikash
{
    public :
    vikash() //constrctor is created  
    {
        count ++;
        cout<<"\nobject is created by vikash singh";
    }
~vikash()  //distructed is cretated
{
    count --;
    cout<<"\nobject is distroy";
}
};
int main()
{
    vikash x,y,z;
    {
        vikash p,q;
    }
    return 0;
}


