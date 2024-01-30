// Exception handling
// Catch all
using namespace std;
#include<iostream>
int main()
{
int a;
cout<<"Enter the value of a\n";
cin>>a;
try{
if(a==0)
throw 1;
else if(a<0)
throw 1.1f;
else if(a>0)
throw 3.4;
}
catch(int x)
{
cout<<"a is 0";
}
catch(...)
{
cout<<"Exception occurs: a is either +ve or -ve";
}


}
