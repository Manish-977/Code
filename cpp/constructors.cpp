#include<iostream>
using namespace std;
class demo
{
    int a ,b,c;
    public :
     demo()//constructor.
     {
        cout<<"enter a two number ="<<endl;
        cin>>a>>b;
     }
     void putdata();
};
void demo::putdata()
{

    c=a+b;
    cout<<a<<"+"<<b<<"="<<a+b;

}
int main()
{
    demo aa;
    aa.putdata();
    return 0;
}