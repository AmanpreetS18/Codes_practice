// Arguments passing techniques
// pass/call by value
// In this technique, any changes made in called function will not
// reflected in calling function
using namespace std;
#include<iostream>
void increment(int a)//called fucntion, formal
{
a=a+10;
}
int main()
{
int x=12;
cout<<"Before function call x is "<<x;//12
increment(x);// function call, actual argument
cout<<"\nAfter function call x is "<<x;//12
}
