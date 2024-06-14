#include<iostream>
using namespace std;
int main()
{
    int arr[1000],i,n,j; 
    cout<<"Enter the array size  = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the number = ";
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
        else
        break;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}