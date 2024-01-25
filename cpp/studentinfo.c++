//singleinheritance

#include<iostream>
#include<string>
using namespace std;
class student 
{
    int roll;
    string name;
    int semester;
    char course[9];
    public:
    void putdata ()
    { cout<<"\n**************************";
       cout<<"\n Enter a name =";
       getline(cin,name );
       cout<<"Enter a roll=";
       cin>>roll;
        cout<<"Enter a semester=";
        cin>>semester;
        cout<<"Enter a course=";
        cin>>course;
    }
    void display ()
    {
        cout<<"\n****************************";
        cout<<"\n Roll of student ="<<roll;
        cout<<"\n Name of student ="<<name;
        cout<<"\n Semester of student ="<<semester<<endl;
        cout<<"\n Course of student="<<course;

    }

};
class Result:public student
{
    int q,w,e,r,t;
    float avg;
    public:
    void inputdata ()
    {
        cout<<"\n******************************"<<endl;
    cout<<"Enter marks of maths =";
    cin>>q;
    cout<<"Enter marks of hindi=";
    cin>>w;
    cout<<"Enter marks of english=";
    cin>>e;
    cout<<"Enter marks of s.s.t=";
    cin>>r;
    cout<<"Enter marks of c++=";
    cin>>t;

    }
    void output ()
    {
        cout<<"\n**************************";
        cout<<"\n Maths ="<<q;
        cout<<"\n Hindi="<<w;
        cout<<"\n enlish="<<e;
        cout<<"\n s.s.t"<<r;
        cout<<"\n c++="<<t<<endl;

    }
    void aveg() 
    {
        avg=q+w+e+r+t/5;
        cout<<"\n****************************";
        cout<<"\nAverage of marks ="<<avg;



    }
};
int main()
{
    Result aa;
    aa.putdata();
    aa.display();
    aa.inputdata();
    aa.output();
    aa.aveg();
    return 0;

}