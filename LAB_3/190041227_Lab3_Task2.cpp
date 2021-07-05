#include<bits/stdc++.h>
using namespace std;

class RationalNumber
{
private:
    int numerator;
    int denominator;
public:
    RationalNumber():numerator(1),denominator(1)
    {

    }
    void assign(int p, int q)
    {
        if(numerator==0)
        {
            cout<<"ERROR"<<endl;
        }
        numerator=p;
        denominator=q;
    }
    double convert()
    {
        if(denominator!=0)
        {
            double d = (double) numerator/denominator;
            return d;
        }
        else{
            return 0;
        }
    }
    void print()
    {
        if(denominator==0)
        {
            cout<<"Error Overflow"<<endl;
        }
        else
        {
            cout<<numerator<<"/"<<denominator<<endl;
        }
    }
    void invert()
    {
        if(denominator!=0) swap(numerator,denominator);
    }
};

int main()
{
    RationalNumber rn;
    int a,b;
    cout<<"Enter two number P = ";
    cin>>a;
    cout<<"q = ";
    cin>>b;
    rn.assign(a,b);
    cout<<"Calculated values"<<endl;
    rn.print();
    cout<<rn.convert()<<endl;
    cout<<"After Invertion"<<endl;
    rn.invert();
    rn.print();
}
