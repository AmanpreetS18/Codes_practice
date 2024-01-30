// Constructor overloading
// It is the process of having more than 1 constructor
// in a same class with different parameters
using namespace std;
#include<iostream>
class rectangle
{
double length,breadth;
public:
rectangle()// default constructor
{
length=12.34;
breadth=67.89;
}
rectangle (double length)
{
this->length=length;
breadth=89.78;
}
rectangle(double length,double breadth)
{
this->length=length;
this->breadth=breadth;
}
void area()
{
cout<<"\nArea is"<<length*breadth;
}
};
int main()
{
rectangle r1,r2(34.56),r3(45.67,89.87);
r1.area();
r2.area();
r3.area();
}
