#include<iostream>
using namespace std;
inline int square(int a)
{
    return (a*a);

}
inline int cube(int a)
{
    return (a*a*a);
}

int main()
{
    cout<<"square of 5="<<square(5)<<endl;
    cout<<"cube of 5="<<cube(5);
    return 0;
}