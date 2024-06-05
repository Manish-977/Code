#include<iostream>
using namespace std;
int search(int arr[],int n, int x)
    {
        for(int i=0;i<=n;i++)
        {
            if(arr[i]==x)
            {
                cout<<"search element = ";
                return i;
                
            }
         }
         cout<<"Enter the number= ";


        return 0;
    }
int main()
{
int arr[5],n,a;
cout<<"ENTER THE size of array =";
cin>>n;
cout<<"enter the search element =";
cin>>a;
for(int i=0;i<5;i++)
{
    cout<<"Enter the number:= ";
    cin>>arr[i];
}
cout<<search( arr,n,a);
return 0;
}
