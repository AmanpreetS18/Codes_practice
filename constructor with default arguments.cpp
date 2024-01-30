// Constructors with default arguments
// Deafult values can be provided to the constructor arguments
// in case if we do not provide the arguments then default values
// will be taken up.
using namespace std;
#include<iostream>
class rectangle
{
int l,b;
public:
rectangle(int l=12,int b=34)// default values for arguments
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
rectangle r1;
r1.area();
rectangle r2(34,56);
r2.area();
}
