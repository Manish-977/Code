#include<iostream>
using namespace std;
int main()
{ 
    int num=13;
    cout<<"enter the number=";
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0)
    {
       //reminder
        rem=num%2;
        //quotient
        num/=2;
        //ans
        ans+=rem*mul;
        //mul
        mul*=10;
        cout<<"decimal no="<<ans<<endl;
    }
    return 0;
}