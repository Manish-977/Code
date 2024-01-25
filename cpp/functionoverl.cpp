#include<iostream>
using namespace std;
int  area ( int  );
int area (int  ,int );
float area (float );

int  main()
{
     int s,l,b; 
    float r;
    cout<<"Enter a side of square=";
    cin >>s;
    cout<<"Enter a length and breath of rectangle =";
    cin>>l>>b;
    cout<<"Enter a redius of circle =";
    cin>>r;
    cout<<"\n Area of square ="<<area(s);
    cout<<"\n Area of rectangle = "<<area(l,b);
    cout<<"\n Area of circle ="<<area(r);


}
int area (int s)
{
    return (s*s);
}
int  area (int  l, int  b)
{
    return (l*b);
}
float area (float r)
{
    return (3.14*r);
}