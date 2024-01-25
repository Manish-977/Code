#include<iostream>
using namespace std;

int main()
{
    int n,i,j,max_no,count;
    float ul[20],ll[20],f[20],x[20],fx[20],cf[20],sum_of_f=0,sum_of_fx=0;
    float medianclass,modalclass,L,F0,F1,F2,W,N,CF,F;
    double mean,median,mode;

    cout<<"Enter the number of class interval u want to entered:";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the class interval "<<i<<" of lower and upper limit: "<<endl;
        cin>>ll[i]>>ul[i];
        cout<<"Enter the frequency "<<i<<" :";
        cin>>f[i];
    }
    cout<<endl<<endl;

    cout.width(8);
    cout<<"Class Interval(CI)";
    cout.width(18);
    cout<<"Frequency (f)"<<endl;

    for(i=1;i<=n;i++)
    {
        cout.width(8);
        cout<<ll[i]<<"-"<<ul[i];
        cout.width(18);
        cout<<f[i]<<endl;
    }

    //Maximum number
    max_no=f[1];
    for(i=1;i<n;i++)
    {
        if(max_no<f[i])
        {
            max_no=f[i];
        }
    }
    cout<<"Maximum frequency="<<max_no<<endl<<endl;

    for(i=1;i<n;i++)
    {
        if(max_no==f[i])
        {
            count++;
        }
    }
    
    //Find Mode
    if(f[1]==max_no||f[n]==max_no||count>1)
    {
        //find mean
        cout.width(8);
        cout<<"Class Interval(CI)";
        cout.width(18);
        cout<<"Frequency (f)";
        cout.width(18);
        cout<<"Mid value (x)";
        cout.width(8);
        cout<<"fx"<<endl;

        for(i=1;i<=n;i++)
        {
            cout.width(8);
            cout<<ll[i]<<"-"<<ul[i];
            cout.width(18);
            cout<<f[i];
            x[i]=(ll[i]+ul[i])/2;
            cout.width(18);
            cout<<x[i];
            fx[i]=f[i]*x[i];
            cout.width(15);
            cout<<fx[i]<<endl;
        }

        cout.width(33);
        cout<<"---------";
        cout.width(31);
        cout<<"------"<<endl;

        cout.width(30);
        for(i=1;i<=n;i++)
        {
          sum_of_f+=f[i];
        }
        cout<<sum_of_f;

        cout.width(33);
        for(i=1;i<=n;i++)
        {
            sum_of_fx+=fx[i];
        }
        cout<<sum_of_fx<<endl;
    
        mean=sum_of_fx/sum_of_f;
        cout<<"\nMean is "<<mean<<endl<<endl;

        //find median
        cf[1]=f[1];
        for(i=2;i<=n;i++)
        {
            cf[i]=cf[i-1]+f[i];
        }
 
        cout.width(8);
        cout<<"Class Interval(CI)";
        cout.width(18);
        cout<<"Frequency (f)";
        cout.width(18);
        cout<<"cf"<<endl;

        for(i=1;i<=n;i++)
        {
            cout.width(8);
            cout<<ll[i]<<"-"<<ul[i];
            cout.width(18);
            cout<<f[i];
            cout.width(25);
            cout<<cf[i]<<endl;
        }  
    
        N=cf[n];
        cout<<"N="<<N<<endl;
        cout<<"N/2="<<N/2<<endl;

        for(i=1;i<=n;i++)
        {
            if(cf[i]>=N/2)
            {
                medianclass=i;
                break;
            }
        }
        cout<<"Median class="<<ll[i]<<"-"<<ul[i]<<endl;
        L=ll[i];
        cout<<"L="<<L<<endl;
        CF=cf[i-1];
        cout<<"CF="<<CF<<endl;
        F=f[i];
        cout<<"F="<<F<<endl;
        W=ul[i]-ll[i];
        cout<<"Class width(W)="<<W<<endl<<endl;

        median =L + ((N / 2 -CF)/F)*W;
        cout<<"Median= "<<median<<endl<<endl;

        //find mode
        mode=(3*median)-(2*mean);
        cout<<"Mode="<<mode<<endl;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(f[i]==max_no)
            {
                modalclass=i;
                break;
            }
        }
        cout<<"Modal Class="<<ll[i]<<"-"<<ul[i]<<endl;

        L=ll[i];
        cout<<"Lower Limit(L)="<<L<<endl;
        F0=f[i];
        cout<<"Frequency of modal class(F0)="<<F0<<endl;
        F1=f[i-1];
        cout<<"Frequency of pre modal class(F1)="<<F1<<endl;
        F2=f[i+1];
        cout<<"Frequency of post modal class(F2)="<<F2<<endl;
        W=ul[i]-ll[i];
        cout<<"Class Width(W)="<<W<<endl<<endl;

        mode=L+((F0-F1)/((2*F0)-F1-F2))*W;
        cout<<"Mode="<<mode;
    }

    
    return 0;
}