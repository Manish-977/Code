#include<iostream>
using namespace std;
//base class
class demo1
{
    protected :
    int a ;
    public:
    void input()
    {
        cout<<"\n enter first number =";
        cin>>a;
 }
};
//derived class
class demo2:public demo1
{
    protected:
    int b;
    public :
    void inputb()
    {
    cout<<"\n enter a secand number= ";
    cin>>b;

    }
    void add()
    {
        cout<<a<<"+"<<b<<"="<<a+b;
    }
};
int main()
{
    //object of derived class
    demo2 aa;
    aa.input();
    aa.inputb();
    aa.add();
    return 0;
    
}