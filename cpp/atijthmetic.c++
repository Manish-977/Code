#include<iostream>
using namespace std;
class number
{
    int a,b,c;
    public:
void input()
{
    cout<<" enter a number="<<endl;
    cin>>a>>b;
}
void addition()
{
    c=a+b;
    cout<<"\n addition ="<<c;
}
void subtraction()
{
    c=a-b;
    cout<<"\n subtraction="<<c;

}
void multiplication()
{
    c=a*b;
    cout<<"\n multiplication ="<<c;
}
void division()
{
    c=a/b;
    cout<<"\n division="<<c;

}
};
int main()
{
    number aa;
    aa.input();
    aa.addition();
    aa.division();
    aa.multiplication();
    aa.subtraction();
    return 0;
}