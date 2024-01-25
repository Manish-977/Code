#include<iostream>
using namespace std;
int main()
{
   
    float a[20],sum=0,mean,median,mode,temp,n;
    int j,size,i,number,count=0,maxcount=0;
    //mean
    cout<<"enter a size of array = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
    cout<<"enter a number = ";
    cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
    sum=sum+a[j];
    }
    mean=sum/n;
    
//median
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
  if(a[i]>a[j])
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    a[j]=temp;
  }
  }
  cout<<"sorted_array:\n"<<endl;
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<endl;
  }
  if(size%2==0)
  {
    median=(((n/2)+((n/2)+1))/2);
  }
  else
  {
    median=((n+1)/2);
  }
  //mode
for(i=0;i<n;i++)
{
  number=a[i];
  count=0;
  for(j=0;j<n;j++)
  {
    if(number==a[j])
    {
      count++;
    }
    if(count>maxcount)
    {
      maxcount=count;
    }
    if(maxcount==1)
    {
      mode=a[0];
    }
    else
    {mode=number;
    }
  }
}
    cout<<"median="<<median<<endl;
    cout<<"mean="<<mean<<endl;
    cout<<"mode="<<mode;
  return 0;
}

