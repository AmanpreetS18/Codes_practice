// Inheritance
// Constructor calling sequence
// Default constructor in multiple inheritance
#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Base class 1 counstructor called\n";
		}
};
class B
{
	public:
		B()
		{
			cout<<"base class 2 constructor called\n";
		}
};
class C : public A, public B
{
	public:
		C()
		{
			cout<<"Derived class C constructor called\n";
		}
};
int main()
{
	C ob;
}
