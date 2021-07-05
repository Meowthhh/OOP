#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    string customer_name;
    int account_number;
    string type;
    int amount;
public:
    BankAccount():amount(0)
    {

    }
    void customerDetails(string name, int account)
    {
        customer_name=name;
        account_number=account;
    }
    void accountType(string t)
    {
        type=t;
    }
    void deposit(int a)
    {
        amount+=a;
    }
    void withdraw(int w)
    {
        amount-=w;
    }
    int balance()
    {
        return amount;
    }
    void display()
    {
        cout<<"Customer Information"<<endl;
        cout<<"Name of the customer: "<<customer_name<<endl;
        cout<<"Account number: "<<account_number<<endl;
        cout<<"Type of account: "<<type<<endl;
        cout<<"Balance amount in the account: "<<amount<<endl;
    }
};

int main()
{
    BankAccount Customer;
    string name,t;
    int account,a,w;
    cin>>name>>t>>account>>a>>w;
    Customer.customerDetails(name,account);
    Customer.accountType(t);
    Customer.balance();
    Customer.deposit(a);
    Customer.withdraw(w);
    Customer.display();
}
