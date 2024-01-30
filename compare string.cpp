// strings
// compare member function
// a=97,b=98,c=99,d=100...
// A=65,b=66,c=67,D=68...
using namespace std;
#include<iostream>
#include<string>
int main()
{
string s1="abc";
string s2="abc";
int c=s1.compare(s2);
cout<<c;//0
string s3="abc";
string s4="def";
int d=s3.compare(s4);
cout<<endl<<d;//-1
string s5="abc";
string s6="DEF";
int e=s5.compare(s6);
cout<<endl<<e;//1
}
