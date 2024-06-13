#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n ,i,j;
    cout<<"Enter the array size = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the number = ";
        cin>>arr[i];
    }
    for(i=n-2;i>=0;i--)
    {
        bool swapped=0;
        for(j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
                
            }
        }
        if(swapped==0)
        break;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}