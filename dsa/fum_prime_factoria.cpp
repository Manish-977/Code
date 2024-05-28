#include<iostream>
using namespace std;
int i;
int prime(int n)
{
    if(n<2)
    return 0;
for(i=2;i<n;i++)
{
    if(n%i==0)
    return 0;
}
return 1;

}
int fact(int n)
{
    int c=1;
    for(i=1;i<=n;i++)
    c=c*i;
return c;
}
int main()
{
    int a,b;
    cout<<"Enter a number=" ;
   cin>>a>>b;
   cout<<prime(a);
   cout<<endl;
   cout<<fact(a);  
    cout<<endl;
   cout<<prime(b);
   cout<<endl;
   cout<<fact(b); 
   
}