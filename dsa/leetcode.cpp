#include<iostream>
using namespace std;
class leetcode

{
    public:
    int addDigits(int num){
        while(num>9)
        {
            int ans =0, rem;
            while( num!=0)
            {
                rem=num%10;
                num/=10;
                ans+=ans;
            }
            num=ans;
        }
        return num;
    }
};