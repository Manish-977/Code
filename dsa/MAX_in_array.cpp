#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int ans=INT_MIN;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the number:";
        cin>>arr[i];
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<"MAX number="<<ans;

}