// write a programme of  hybrid inheritance 
#include<iostream>
using namespace std;
class student 
{
    protected :
    int rollno;
    public :
    void get_rollno(int i)
    {
        rollno=i;
    }
    void show_rollno()
    {
        cout<<"\nroll no="<<rollno;
    }
};
class test : public student
{
    protected :
    float sub1,sub2;
    public :
    void get_marks(float i,float j)
    {
        sub1=i;
        sub2=j;
    }
    void show_marks()
    {
        cout<<"\nsub1="<<sub1;
        cout<<"\nsub2="<<sub2;
    }
};
class score {
    protected :
    float scr;
    public :
    void get_score(int m)
    {
        scr=m;
    }
    void show_score()
    {
        cout<<"\nscore="<<scr;
    }
};
class result : public test,public score
{
    float total;
    public :
    void display()
    {
        total=sub1+sub2;
        show_rollno();
        show_marks();
        show_score();
        cout<<"\nTotal="<<total;
    }
};
int main()
{
    result d;
    d.get_rollno(101);
    d.get_marks(80.3,45.2);
    d.get_score(150);
    d.display();
    return 0;

}

