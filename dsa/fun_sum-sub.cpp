#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int sub(int h,int j)
{
int v=h-j;
return v;
}


int main()
{
      int m,n,o,p;
      cout<<"enter a number =";
      cin>>m>>n>>o>>p;
      cout<<sum(m,n);
      cout<<endl;
      cout<<sum(o,p);
      cout<<endl;
      cout<<sub(m,n);


}