// Exception handling
// Catch all
using namespace std;
#include<iostream>
void check(int x)
{
int rev=0,num=x,t;
while(x)
{
t=x%10;
rev=rev*10+t;
x=x/10;
}
if(rev==num)
throw 1;
cout<<"Reverse of number is "<<rev;


}
int main()

{
int x;
cout<<"Enter the value of x\n";
cin>>x;
try{
check(x);
}
catch(...)
{
cout<<"Exception occured: number is palindrome\n";
}
}
