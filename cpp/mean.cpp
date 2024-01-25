#include<iostream>
using namespace std; 
int main()
{
    int i,n;
    float ul[20],ll[20],f[20],fx[20],x[20],sum_of_f=0,sum_of_fx=0,mean;
    cout<<"Enter a numbe u want :";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter a class interval lower limit";
        cin>>ll[i]>>ul[i];
        cout<<endl;
        

    }
      for(i=1;i<=n;i++)
      {
        cout<<"Enter a frequrncy =";
        cin>>f[i];
      }
      for(i=1;i<=n;i++)
      {
        x[i]=(ul[i]+ll[i])/2;

      }
      for(i=1;i<=n;i++)
      {
        fx[i]=f[i]*x[i];
      }
      for(i=1;i<=n;i++)
      {
        sum_of_f+=f[i];
        sum_of_fx+=fx[i];

      }
      
      cout<<"class intervael    frequency    x      fx"<<endl;
      cout<<"_________________"<<"____________"<<"__________"<<"___________"<<endl;
      cout<<"|"<<endl;
      for(i=1;i<=n;i++)
      {
      cout<<"  "<<ll[i]<<"-"<<ul[i]<<"\t\t";
      cout<<"  "<<f[i]<<"\t";
      cout<<"  "<<x[i]<<"\t";
      cout<<"  "<<fx[i]<<endl;
      }
       cout<<"______________________________________________________________"<<endl;
      cout<<"tolat =\t\t"<<sum_of_f<<"\t\t"<<sum_of_fx<<endl;
      mean =sum_of_fx/sum_of_f;
      cout<<"mean ="<<mean;
      return 0;  

}