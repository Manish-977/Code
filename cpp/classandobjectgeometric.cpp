#include<iostream>
using namespace std;
class room1
{
    public:
    int l,b,h;
    void input();
    void output();

};
void room1::input()
{
    cout<<"enter a lenght =";
    cin>>l;
    cout<<"enter a breath =";
    cin>>b;
    cout<<"enter a hight =";
    cin>>h;

}
void room1:: output()
{
    cout<<"calculate of area ="<< l*b<<endl;
    cout<<"calculat of volume =" << l*b*h<<endl;

}
int main()
{
    room1 a;
    a.input();
    a.output();
    return 0;
}