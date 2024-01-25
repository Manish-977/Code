//parameterzed constructor
#include<iostream>
#include<string>
using namespace std;
class demo
{
    
    public:
     string name;
    int a;
    demo(string name2, int x)
    {
        name=name2;
        a=x;
    }
    void putdata()
    {
        cout<<"name of student ="<<name<<endl;
        cout<<"value of a ="<<a;
    }
};
int main()
{
    string name1;
    int m;
    cout<<"Enter a name "<<endl;
    getline(cin,name1);
    cout<<"enter a number :";
    cin>>m;
    demo aa( name1, m);
    aa.putdata();
}