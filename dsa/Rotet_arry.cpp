#include<iostream>
using namespace std;
void fun(int arr[],int n)
{
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
int last =arr[n-1];
for(int i=n-2;i>=0;i--)
arr[i+1]=arr[i];
arr[0]=last;
}
int main()
{
    int n=5,arr[5]={3,4,6,7,5};
    fun(arr,5);
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<" ";
    }
    return 0;

}
