// reverse the array but you have to check 
#include<iostream>
#include<stack>

using namespace std;

int arr(int a[] ){
    stack<int> s;
    int b[]; 
    for(int i =0;i<sizeof(a)/sizeof(a[0]);i++){
        s.push_back(a[i]);
    }
    for(int i=0;i<s.size();i++){
        b[i]=s.top();
        s.pop();
    }
}

int main()
{
    int a[]={1,2,23,4,5};
    int res = arr(a);
    cout<<res;
    return 0;
}
