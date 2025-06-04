#include<iostream>
using namespace std;
class num
{
public:
    int m=11;
    virtual void shownum()=0;
};
class outhex:public num
{
public:
    void shownum()
    {
    cout<<"In hexadecimal value : "<<hex<<m;
    cout<<endl;
    }
};
class outoct:public num
{
public:
    void shownum()
    {
    cout<<"In octal value : "<<oct<<m;
    cout<<endl;
    }
};
int main()
{
    num *x;
    outhex h;
    x=&h;
    x->shownum();
    outoct o;
    x=&o;
    x->shownum();
}
