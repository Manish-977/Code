#include<iostream>
using namespace std;
int main()
{
    int i,*p;
    p=&i;
    p=new int [3];
    *p=2;
    *(p+1)=3;
    *(p+2)=4;
    cout<<"value address";
    for(int x=0;x<3;x++)
    cout<<*(p+x)<<"\t"<<(unsigned(*p+x));
    delete[]p;
    return 0;

}
