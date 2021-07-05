#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
    float length;
    float width;
    public:
    Rectangle(float l =1,float w=1): length(l),width(w)
    {

    }
    float area()
    {
        return length*width;
    }

    float perimeter()
    {
        return 2*(length+width);
    }
    void set()
    {
        float l1,w1;
        cout << "Length: ";
        cin >> l1;
        cout << "Width: ";
        cin >> w1;
        if (l1 >= 1.0 and l1 <= 20.0 and w1 >= 1.0 and w1 <= 20.0)
        {
            length=l1;
            width=w1;
        }
        else cout << "Error!"<<endl;
    }
    void get()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};
int main()
{
    Rectangle rec;
    rec.set();
    rec.get();

    return 0;
}
