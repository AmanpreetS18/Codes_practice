// working of pointers
// constant pointer
using namespace std;
#include<iostream>
int main()
{
int x=12;
int * const p=&x;// constant pointer
cout<<*p;
int y=34;
//p=&y;compile time error
}
