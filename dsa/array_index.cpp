#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i = 0;i<sizeof(arr)/sizeof(int);i++){
     cout<<"Enter the arry :";
    cin>>arr[i];
    }
    for(int j = 0;j<5;j++)
    cout<<arr[j]<<" ";
    return 0;
}