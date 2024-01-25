#include<iostream>
using namespace std;
int main()
{
    int n,i,j,max_no,count;
    float ul[20],ll[20],f[20],modelclass;
    float L,F1,F0,F2,I;
    double mode;
    cout<<"Enter the number u want to entered :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter a class interver "<<i<<"of lower and upper ";
        cin>>ll[i]>>ul[i];
        cout<<"Enter a frequency =";
        cin>>f[i];
    }
    cout<<endl<<endl;

    cout.width(8);
    cout<<"class interval(CI)";
    cout.width(18);
    cout<<"frequnecy(F)"<<endl;
    
    for(i=0;i<=n;i++)
    {
        cout.width(8);
        cout<<ll[i]<<"-"<<ul[i];
        cout.width(18);
        cout<<f[i]<<endl;
    }
    max_no=f[i];
    for(i=1;i<=n;i++)
    {
        if(max_no<f[i])
        {
            max_no=f[i];

        }
    }
    for(i=1;i<=n;i++)
    {
        if(max_no==f[i])
        {
            count++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(f[i]==max_no)
        {
            modelclass=i;
            break;
        }
    }
    cout<<"Model class ="<<ll[i]<<"-"<<ul[i]<<endl;
    L=ll[i];
    cout<<"L="<<L<<endl;
    F0=f[i];
    cout<<"frequecny of model class="<<F0<<endl;
    F1=f[i-1];
    cout<<"frequecnt of pre ="<<F1<<endl;
    F2=f[i+1];
    cout<<"frequecny of post ="<<F2<<endl;
    I=ul[i]-ll[i];
    cout<<"I="<<I<<endl;
    mode=L+((F0-F1)/((2*F0)-F1-F2))*I;
cout<<"mode= "<<mode;
return 0;
}