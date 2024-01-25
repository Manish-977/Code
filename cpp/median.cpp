#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float ul[20],ll[20],f[20],cf[20],medianclass;
    float F,CF,L,N,I;
    double median;
     cout<<"Enter a class interval u want ";
     cin>>n;
     cout<<endl;
     for(i=1;i<=n;i++)
     {
        cout<<"Enter a class interval lower limit"<<endl;
        cin>>ll[i];
        cout<<"Enter a class interval upper limit"<<endl;
        cin>>ul[i];
    }
     for(i=1;i<=n;i++)
     {
        cout<<"Enter the frequency ;";
        cin>>f[i];

     }
     cout<<endl<<endl;
     cf[1]=f[1];
     for(i=2;i<=n;i++)
     {
        cf[i]=(cf[i-1]+f[i]);
     }
     cout.width(8);
     cout<<"class interval (CI)";
     cout.width(18);
     cout<<"frequency (F)";
     cout.width(18);
     cout<<"cf "<<endl;

     for(i=1;i<=n;i++)
     {
        cout.width(8);
        cout<<ul[i]<<ll[i];
        cout.width(18);
        cout<<f[i];
        cout.width(18);
        cout<<cf[i]<<endl;

     }
     N=cf[n];
     cout<<"N ="<<N<<endl;
     cout<<"N/2="<<N/2;
      for(i=1;i<=n;i++)
      {
        if(cf[i]>=N/2)
        {
            medianclass=i;
            break;
        }
      }
      cout<<"Median class"<<ll[i]<<"-"<<ul[i]<<endl;
      L=ll[i];
      cout<<"L="<<L<<endl;
      CF=cf[i-1];
      cout<<"CF="<<CF<<endl;
      F=f[i];
      cout<<"F= "<<F<<endl;
      I=ul[i]-ll[i];
      cout<<"I= "<<I<<endl;

      median =L+((N/2-CF)/F)*I;
      cout<<"Median ="<<median;
      return 0;
}