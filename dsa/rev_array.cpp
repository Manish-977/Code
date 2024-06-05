#include<iostream>
using namespace std;
int rev( int arr[])
{
    int start=0; int end=5;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return 0;
}
int main()
{
    int arr[6],n;
    cout<<"Enter the size of array = ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number of array = ";
        cin>>arr[i];
    }
    cout<<rev(arr);
    for(int  i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<"reverse array "<<arr[i]<<" ";
    }
    return 0;

}