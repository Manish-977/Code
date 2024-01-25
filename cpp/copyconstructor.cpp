//copy __constructor
#include<iostream>
using namespace std;
class demo
{
    int a ;
    public:
    demo(int x)
    {
        a=x;

    }
    demo(demo &x)
    {
        a=x.a;
    }
    void putdata ()
    {
        cout<<"value of a ="<<a;

    }
};
int main()
{
    int m;
    cout<<"Enter a number :";
    cin>>m;

    demo aa(m);
    aa.putdata();
    return 0;
}