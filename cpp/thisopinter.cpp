#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void ste_x(int x)
    {
        this -> x=x;

    }
    void print()
    {
        cout<<"x="<<x<<endl;

    }};
    int main()
    {
        test obj;
        int x=20;
        obj.ste_x(x);
        obj.print();
        return 0;
    }
