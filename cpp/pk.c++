#include<iostream>
#include<math.h>
using namespace std;
float cc (int x[],int y[],int n)
{
    int sum_x=0,sum_y=0,sum_xy=0;
    int squaresum_x=0,squaresum_y=0;
    for(int i=0;i<n;i++)
    {
        sum_x=sum_x+x[i];
        sum_y=sum_y+y[i];
        sum_xy=sum_xy+x[i]*y[i];
        squaresum_x=squaresum_x+x[i]*x[i];
        squaresum_y=squaresum_y+y[i]*y[i];

    }
    float corr=(float)(n*sum_xy-sum_x*sum_y)/
    sqrt((n*squaresum_x-sum_x*sum_x)*(n*squaresum_y-sum_y*sum_y));
    return corr;

}
int main()
{
    int m,i;
    int x[i];
    int y[i];
    cout<<"Enter a number of (X)=";
    cin>>m;
    cout<<"Enter a number of (Y)=";
   cin>>m;
    for(int i=0;i<m;i++)
    {
        cout<<"X=";
        cin>>x[i];
    }
    cout<<"*********"<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<"Y=";
        cin>>y[i];
    }
     cout<<"Answer = "<<cc(x,y,m);
    return 0;
}
