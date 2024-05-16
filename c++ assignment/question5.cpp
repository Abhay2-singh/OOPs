/*Define a class to represent a bank account. Include the following members:
Data members
1. Name of the depositor
2. Account number
3. Type of account
4. Balance amount in the account
Member functions
1. To assign initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance
Write a main program to test the program*/
#include<iostream>
using namespace std;
class bankaccount{
    private:
    string depositorname;
     long accountNumber;
    string accountType;
    double balance;
    public:
    bankaccount(const string& name,long accnumber,const string& acctype, double accbalance)
    {
        string depositorname=name;
     long accountNumber=accnumber;
    string accountType=acctype;
     double balance=accbalance;
    }
    void deposit(double amount)
    {
        balance=balance+amount;
        cout<<"\ndeposit="<<balance<<"\nsuccesful="<<endl;
    }
    void withdraw(double amount)
    {
    if(balance>=amount)
    {
        balance=balance-amount;
        cout<<"\nwithdraw is="<<balance<<"sucessful="<<endl;
    }
    else{
        cout<<"\nwithdraw is failed";
    }
    }
    void display(){
         cout<<"\nBalance is ="<<balance;
        cout<<"\n Depositor Name is"<<depositorname;
}
};
int main()
{
     bankaccount account("abhay", 123456789, "Savings", 10000.0);
     account.deposit(1000.0);
     account.withdraw(500.0);
     account.display();

    return 0;

}