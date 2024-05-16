/*Create two classes DM and DB which store the value of distances. DM stores distances in meters and
centimeters and DB in feet and inches. Write a program that can read values for the class objects and odd
one object of DM with another object of DB.
 Use a friend function to carry out the addition operation. The object that stores the results may be a
DM object or DB object, depending on the units in which the result are required. The display should be in
the format of feet and inches or meters and centimeters depending on the object on display.*/
#include<iostream>
using namespace std;
class db;
class dm
{
    private :
    int meter ;
    int centimeters;
    public :
    dm(int m=0 int cm=0)
    friend void add(dm &d1,db &d2);
    void display()
    {
        cout<<"\ndistance="<<meter<<"meter="<<centimeter<<"centimeter="<<endl;

    }
};
class db{
    private :
    int feet;
    int inches;
    public :
    db(int f=0,int i=0)
    friend void addI(dm &d1,db &d2);
    void display()
    {
        cout<<"distance="<<feet<<"feet="<<inches
<<"inches"<<endl;   
 }
};
void add(dm &d1,db &d2)
{
    int totalmeter = d1.meter+ d2.feet*0.3048 ;//1 feet =0.3048
    int totalcentimeter = d1.centimeter+d2.inches*2.54;
    total meter=totalmeter+totalcentimeter/100;
    totalcentimeter=totalcentimeter%100;
    cout<<"result of dm="<<totalmeter<<"meter="<<totalcentimeter<<"centimeter"<<endl;

}
int main()
{
    dm d1(5,80);
    db d2(15,16);
    cout<<"\norignal distance";
    cout<<"\ndm";
    d1.display();
    cout<<"\ndb";
    d2.display();
    add(d1,d2);
    return 0;
}