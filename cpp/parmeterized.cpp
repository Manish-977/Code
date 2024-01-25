#include<iostream>
using namespace std;
class demo
{
    int a,b,c;
    public :
    demo(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void displaydata()
    {
        c=a+b;
        cout<<a<<"+"<<b<<"="<<c<<endl;
    }

};
int main()
{
    int x,y,c;
    cout<<"enter a number ="<<endl;
    cin>>x>>y;
    demo demo1 (x,y,c);
    demo1. displaydata();
}