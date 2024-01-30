// Constructors with default arguments

using namespace std;
#include<iostream>
class rectangle
{
int l,b;
public:
rectangle()
{
l=56;
b=78;
}
rectangle(int l=12,int b=34)
{
this->l=l;
this->b=b;
}
void area()
{
cout<<endl<<"Area is "<<l*b;
}
};
int main()
{
rectangle r1;// compile time error
r1.area();
}
