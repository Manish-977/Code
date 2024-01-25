
#include<iostream>
using namespace std;
class addition
{
    int a,b,c;
    public:
    void input();
    void output();

};
void add_input()
{
    cout <<"enter a number ===";
    cin>>a>>b;

}
void add_output()
{
   c=a+b;
   cout<<a<<"+"<<b<<"="<<c;
}
int main()
{
    addition aa;
    aa.input();
    aa.output();
    return 0;
}
