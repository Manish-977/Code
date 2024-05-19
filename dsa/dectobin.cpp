#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number =";
    cin>>num;
    int ans,rem=0,mul=1;
    while(num>0)
    {
        //reminder
        rem=num%10;
        //quotient
        num/=10;
        //ans
        ans+=rem*mul;
        //mul
        mul*=2;
        cout<<"binary no="<<ans<<endl;
    }
}