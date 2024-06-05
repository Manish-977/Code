#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the array size = "; 
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++)
   cout<<arr[j]<<" ";
return 0;
}