#include<iostream>
using namespace std;
 class demo
 {
    int count=0;
    public:

    demo()
    {
        count++;
        cout<<"\n no of abject deleted :"<<count;

    }
    ~demo()
    {
        cout<<"\n no.of object deleted :"<<count;
        count--;

    }
 };
 int main()
 {
    demo aa,bb;
    {
        demo dd;
    }
    return 0;
 }