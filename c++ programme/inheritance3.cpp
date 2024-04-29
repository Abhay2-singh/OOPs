//writea programe of multiple level inheritance 
#include<iostream>
using namespace std;
class student 
{
    protected  :
    int rollno;
    public :
    void get_rollno(int i)
    {
        rollno=i;
    }
    void show_rollno()
    {

        cout<<"\nRoll no="<<rollno;
    }
};
class test : public student
{
    protected :
   
    float sub1,sub2;
    public :
    void get_marks(float x,float y )
    {
        sub1=x;
        sub2=y;
    }
    void show_marks()
    {
        cout<<"\nsub1="<<sub1; 
        cout<<"\nsub2="<<sub2; 
    }
};
class result : public test
{
   protected :
    float total;
    public :
    void display()
    {
        total=sub1+sub2;
        show_rollno();
        show_marks();
        cout<<"\ntotal="<<total;
    }
};
int main()
{
    result d;
    d.get_rollno(1010);
    d.get_marks(97.39,80.12);
    d.display();
    return 0;
}