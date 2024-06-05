#include<iostream>
using namespace std;
int print2largest(int arr[],int n)
{
int ans = INT_MIN;
//largest element 
for(int i=0;i<n;i++)
{
    if(arr[i]>ans)
    ans=arr[i];
}
//second largest
int second =INT_MIN; 
for(int i=0;i<n;i++)
{
    if(arr[i]!=ans)
    second=max(second,arr[i]);

}

return second;
}
int main()
{
    int arr[6],n;
    cout<<"Enter the size of array = ";
    cin>>n;
     for(int i=0;i<6;i++)
     {
        cout<<"Enter the number =";
        cin>>arr[i];
     }
     cout<<print2largest(arr,n);
     
     return 0;
}