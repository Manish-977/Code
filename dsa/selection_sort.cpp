#include<iostream>
using namespace std;
int main()
{
    
    int arr[6],i;
    for(i=0;i<6;i++){
    cout<<"Enter the number =";
    cin>>arr[i];
    }
    for(i=0;i<5;i++){
         int index=i;
         for(int j=i+1;j<6;j++)
         {
            if(arr[j]<arr[index])
            index=j;
         }
         swap(arr[i],arr[index]);
    }
         for(int i=0;i<6;i++)
         {
            cout<<arr[i]<<" ";
        }
  
}