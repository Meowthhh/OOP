#include<bits/stdc++.h>
using namespace std;

class plane
{
    private:
    int flight_number;
    string destination;
    float distance;
    float max_fuel_capacity;
    int CalFuel()
    {
        if(distance<=1000)
        {
            return 500;
        }
        else if(distance<=2000)
        {
            return 1100;
        }
        else if(distance>2000)
        {
            return 2200;
        }
    }
    public:
    void FeedInfo()
    {
        int a;
        string b;
        float c,d;

        cout<<"Enter flight number: ";
        cin>>a;
        cout<<"Enter destinantion: ";
        cin>>b;
        cout<<"Enter distance: ";
        cin>>c;
        cout<<"Enter maximum fuel capacity: ";
        cin>>d;

        flight_number=a;
        destination=b;
        distance=c;
        max_fuel_capacity=d;
    }
    void ShowInfo()
    {
        cout<< flight_number <<endl;
        cout<< destination <<endl;
        cout<< distance <<endl;
        cout<< max_fuel_capacity <<endl;
        if(max_fuel_capacity>=CalFuel())
        {
            cout<<"Fuel Capacity is fit for this flight"<<endl;
        }
        else
        {
            cout<<"Not sufficient Fuel Capacity for this flight"<<endl;
        }
    }
};

int main()
{
    plane p;
    p.FeedInfo();
    p.ShowInfo();

    return 0;
}
