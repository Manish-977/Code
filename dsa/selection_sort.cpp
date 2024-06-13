#include<iostream>
using namespace std;
int main()
{
    
    int arr[1000],n,i;
    cout<<"Enter the size of array :";
    cin>>n; 
    for(i=0;i<n;i++){
    cout<<"Enter the number =";
    cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
         int index=i;
         for(int j=i+1;j<n;j++)
         {
            if(arr[j]<arr[index])
            index=j;
         }
         swap(arr[i],arr[index]);
    }
         for(int i=0;i<n;i++)
         {
            cout<<arr[i]<<" ";
        }
  
}