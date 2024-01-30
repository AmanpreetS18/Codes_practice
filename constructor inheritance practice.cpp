/*Write a program to declare a class student with roll_no nd name as a data members.
Take 1 default consturctor to give initial values as 1 and "mohit kumar". Make a class result which inherits from stdent
and have 3 data members m1,m2,m3 and 1 default constructor to give values as 12,34,56. Print the details*/

#include <iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
		string name;
	public:
		student()
		{
			roll_no=1;
			name="Mohit Kumar";
		}
};
class result : public student
{
	double m1,m2,m3;
	public:
		result()
		{
			m1=12;
			m2=34;
			m3=56;
		}
		void show()
		{
			cout<<roll_no<<" "<<name<<" "<<m1+m2+m3;
		}
};
int main()
{
	result r;
	r.show();

}
