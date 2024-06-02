// reverse the array but you have to check 
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int arr(int a[] ){
    stack<int> s;
    int b[]; 
    for(int i =0;i<sizeof(a)/sizeof(a[0]);i++){
        s.push_back(a[i]);
    }
    for(int i=0;i<stack.size();i++){
        b[i]=stack.top();
        stack.pop();
    }

}

int main()
{
    return 0;
}
