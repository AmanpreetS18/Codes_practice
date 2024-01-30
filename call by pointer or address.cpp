// Arguments passing techniques
// pass/call by address/pointer
// In this technique, any changes made in called function will
// reflect in calling function
using namespace std;
#include<iostream>
void increment(int *p)//called fucntion, formal
{
*p=*p+10;// *p=12+10
}
int main()
{
int x=12;
cout<<"Before function call x is "<<x;//12
increment(&x);// function call, actual argument
cout<<"\nAfter function call x is "<<x;//22
}
