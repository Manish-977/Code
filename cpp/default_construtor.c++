#include<iostream>
using namespace std;
class demo
{
    int a,b,c;
    public:
    demo()//construtor 

    {
        cout<<"enter a number :"<<endl;
        cin>>a>>b;
    }
    void putdata()
    {
        c=a+b;
        cout<<a<<"+"<<b<<"="<<c<<endl;
    }
    
};
int main()
{
    demo demo1;
    demo1.putdata();
    return 0;
}