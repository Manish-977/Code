#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo()
    {
      a=120;
      b=356;

    }
    demo(demo &z)
    {
        a=z.a;
        b=z.b;
    }
    void putdata()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    void display()
    {
        cout<<"b="<<b<<endl;
    }
};
int main()
{
demo aa;

demo bb(aa);
demo cc(bb);
aa.putdata();
bb.putdata();
cc.putdata();

demo hh;

demo gg(hh);
demo vv(gg);
hh.display();
gg.display();
vv.display();
return 0;

}
