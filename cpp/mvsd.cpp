#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a[40],sum=0,sum1,var,mean,sd;
    int i,j,n,k;
    cout<<"enter a arra size =";
    cin>>n;
for(i=0;i<n;i++)
{
    cout<<"enter a number =";
    cin>>a[i];
}
for(j=0;j<n;j++)
{
    sum=sum+a[j];
}
mean =sum /n;
for(k=0;k<n;k++)
{
    sum1=sum1+pow(mean-a[k],2);
}
var=sum1/n;
sd=sqrt(var);
cout<<"mean= "<<mean<<endl;
cout<<"variand= "<<var<<endl;
cout<<"standar divation = "<<sd;
return 0;
}