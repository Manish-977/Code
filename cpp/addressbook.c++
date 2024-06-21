#include<iostream>
#include<string.h>
using namespace std;
class addressbook
{
int phone_no;
string name;
char relationship[10];
char email[10];
char address[10];
public:
void input();
void output();
};
void addressbook::input()
{
    cout<<"enter a phone no="<<endl;
    cin>>phone_no;
    cout<<"enter a name="<<endl;
    cin>>name;
        
    getline(cin,name);

    cout<<"enter a relationship="<<endl;
    cin>>relationship;
    cout<<"enter a email ="<<endl;
    cin>>email;
    cout<<"enter a address="<<endl;
    cin>>address;
}
void addressbook::output()
{
    cout<<"*************************"<<endl;
    cout<<"phone no=" << phone_no <<endl;
    cout<<"name="<<name<<endl;
    cout<<"retationship="<<relationship<<endl;
    cout<<"email="<<email<<endl;
    cout<<"address="<<address<<endl;
}
int main()
{
    addressbook aa;
    aa.input();
    aa.output();
    return 0;
}