#include<iostream>
using namespace std;
void swap(int &a,int &b)//pass by reference (&)
{
 int c;
 c=a; 
 a=b;
 b=c;
}
void swap(float &c,float &d)//function overloading
{
    float r=c;
    c=d;
    d=r;
}
int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    swap(a,b);
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b;
    cout<<endl;
    float f1,f2;
    cout<<"Enter the number=";
    cin>>f1>>f2;
    swap(f1,f2);
    cout<<"f1="<<f1;
    cout<<endl;
    cout<<"f2="<<f2;
}