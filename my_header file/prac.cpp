#include<iostream>
#include<string>
using namespace std;
class rec{
public:
    void area(int x, int y)
    {
        cout<<"Area of rectangle is: "<<x*y<<endl;
    }
     void area(float p)
    {
        cout<<"Area of square is: "<<p*p<<endl;
    }
     void area(double a, double b)
    {
        cout<<"Area of triangle is: "<<0.5*a*b<<endl;
    }
};
int main()
{
    rec ob1;
    ob1.area(22,30);
    ob1.area(20.33);
    ob1.area(33.4,22.3);
    return 0;

}
