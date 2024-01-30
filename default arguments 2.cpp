// Function with default arguments

using namespace std;
#include<iostream>
int add(int a,int b,int c=56);
int main()
{
cout<<"Sum is "<<add(12,34);
}
int add(int a,int b,int c)
{
return (a+b+c);
}
