#include<iostream>
using namespace std;
template <class t>
t area (t x)
{
    return (x*x);
}
template <class t>
t area (t x, t y)
{
    return (x*y);
}
template <class t>
t arer(t o)
{
    return (3.14*o);

}
int main()
{
    int s,l,b,r;
    cout<<"Enter the side of squrae =";
    cin>>s;
    cout<<"Enter the length and breath of rectangle=";
    cin>>l>>b;
    cout<<"Enter the radius of circle=";
    cin>>r;
    cout<<"\nArea of squrae ="<<area(s);
    cout<<"\nArea of rectangle ="<<area(l,b);
    cout<<" \n Area of circle ="<<area(r);
    return 0;
}