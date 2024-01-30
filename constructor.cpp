// Constructors
// Default constructor
using namespace std;
#include<iostream>
class rectangle
{
double l,b;
public:
rectangle()// constructor
{
l=12.34;
b=56.78;
}
void area()
{
cout<<"Area is "<<l*b;
}
};
int main()
{
rectangle r;// constructor called
r.area();
}
