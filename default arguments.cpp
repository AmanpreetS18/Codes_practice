// Function with default arguments
using namespace std;
#include<iostream>
int add(int a=12,int b=78);
int main()
{
cout<<"Sum is "<<add();
cout<<"\nSum is "<<add(45,67);
cout<<"\nSum is "<<add(65);
}
int add(int a,int b)
{
return (a+b);
}
