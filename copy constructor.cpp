// Copy Constructors
using namespace std;
#include<iostream>
class rectangle
{
double length,breadth;
public:
rectangle(double x,double y)
{
length=x;
breadth=y;
}
rectangle(rectangle &ob)
{
length=ob.length;
breadth=ob.breadth;
}
void area()
{
cout<<"\nArea is "<<length*breadth;
}
};
int main()
{
rectangle ob1(12.34,56.78);
rectangle ob2=ob1;// call to copy constructor
// rectangle ob2(ob1);
ob1.area();
ob2.area();
}
