#include<iostream>
#include<string>

using namespace std;

template <class T>
class Arithmetic
{
  private:
    T a;
    T b;
  public:
  Arithmetic(T a1, T b1);
   T add();
   T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a1,T b1)
{
  T a=a1;
  T b=b1;
}



template<class T>
T Arithmetic<T>::add()
{
  T c;
  c=a+b;
  return c;
}


template<class T>
T Arithmetic<T>::sub()
{
  T c;
  c=a-b;
  return c;
}

int main()
{
    
  Arithmetic ar(20.3,23.4);
  ar.add();
  ar.sub();
  return 0;
}