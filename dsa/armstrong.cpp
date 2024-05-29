#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}
bool Armstrong(int num,int digit)
{
    int n=num,ans=0,rem,pow;
    while(n)
    {
        rem=n%10;
        n/=10;
        ans=ans+ std::pow(rem,digit);
    }
    if(ans==num)
    {
     cout<<"the number is armstrong -";
     return 0;
    }
else
{
    cout<<"the number is not armstrong-";
    return 0;

}

}
int main()
{
    int num;
    cout<<"Enter a number=";
    cin>>num;
    //count digit
    int digit=countdigit(num);
    //Armstrong number
    cout<<Armstrong(num,digit);

}