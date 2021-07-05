#include<bits/stdc++.h>
using namespace std;

class Calculator
{
    private:
        int key;
    public:
        Calculator()
        {
            key=0;
        }
        Calculator(int val)
        {
            key=val;
        }
        void getValue()
        {
            cout<<"Enter value = ";
            cin>>key;
        }
        void setValue(int value)
        {
            key=value;
        }
        void add (int value)
        {
            key+=value;
        }
        void subtract (int value)
        {
            key-=value;
        }
        void multiply (int value)
        {
            key*=value;
        }
        void divideBy(int value)
        {
            if(value==0) cout<<"Error!"<<endl;
            else key/=value;
        }
        void display()
        {
            cout<<"Calculator display: ";
            cout<<key<<endl;
        }
        void clear()
        {
            key=0;
        }
        ~Calculator()
        {
            cout<<"Calculator object is destroyed."<<endl;
        }
};

int main()
{
    Calculator calcu;
    calcu.add(10);
    calcu.display();
    calcu.add(7);
    calcu.display();
    calcu.multiply (31);
    calcu.display();
    calcu.subtract (42);
    calcu.display();
    calcu.divideBy (7);
    calcu.display();
    calcu.divideBy (0);
    calcu.display();
    calcu.add (3);
    calcu.display();
    calcu.subtract (1);
    calcu.display();
    calcu.clear();
    calcu.display();

    return 0;
}
