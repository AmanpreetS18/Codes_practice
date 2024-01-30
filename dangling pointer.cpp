// working of pointers
// dangling pointers
using namespace std;
#include<iostream>
int main()
{

int *p;
{
int x=12;
p=&x;
cout<<"*p is "<<*p;//12
}
//*p=NULL;// solution to dangling pointer
cout<<"\n*p is "<<*p;// dangling pointer
}
