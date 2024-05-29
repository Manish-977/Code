#include<iostream>
using namespace std;
class solution
{
    public:
    static bool canwinnim(int n);
};

     bool solution::canwinnim(int n)
     {
        if(n%4==0)
        {
            cout<<"you are winner:";
            return 0;
        }
        else{
            cout<<"you are loser";
            return 0;
        }
         }

int main()
{
    int a;
    cout<<"Enter the number  of stones :";
    cin>>a;
    cout<<solution::canwinnim(a);

}