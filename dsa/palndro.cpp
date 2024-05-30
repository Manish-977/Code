#include<iostream>
using namespace std;
int a, n,num,digit,rev=0;
int palindrome(int num)
{
    n=num;
    do{
        digit=num%10;
        rev=(rev*10)+digit;
         num = num / 10;
     } 
     while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
     {
         cout << " The number is a palindrome.";
         return 0 ;
     }
     else{
         cout << " The number is not a palindrome.";
         return 0;
     }

}
    int main()
    {
        cout<<"Enter the number :";
    cin>>a;
    cout<<palindrome(a);
    }
