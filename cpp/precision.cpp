#include<iostream>
using namespace std;
int main()
{
    int x=0;
    float pi;
    for(x=10;x>=1;x--)
    {
        pi = (float)22/7;
        cout.precision(x);
        cout<<"\n"<<pi;

    }
    x=cout.precision(1);
    cout<<"\n\n previous setting :"<<x;
    return 0;
}