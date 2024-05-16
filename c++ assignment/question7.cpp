/*Design a constructor for bank account class.*/
#include<iostream>
using namespace std;
class bankaccount{
    private :
    string depostiorname;
    long accountnumber;
    string accounttype;
    double balance;
    public :
    bankaccount(const string& name,long accnumber,const string& acctype,double intialbalance)
    {
        depostiorname= name;
        accountnumber= accnumber;
        accounttype=acctype;
        balance=intialbalance;
    }
    void display()
    {
        cout<<"\ndepositor name="<<depostiorname;
        cout<<"\naccount number="<<accountnumber;
        cout<<"\naccount type="<<accounttype;
        cout<<"\nbalance="<<balance;
    }
};
int main()
{
    bankaccount account("abhay singh",977777,"saving",5000);
    account.display();
    return 0;

}