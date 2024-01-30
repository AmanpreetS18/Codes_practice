/*Write a program to
 create a class student with data members
  roll_no,name and marks.
   Initialize the data members
   using constructors and print the details.*/
using namespace std;
#include<iostream>
class student
{
    int roll_no;
    string name;
    double marks;
public:
    student()
    {
        roll_no=12116418;
        name="kohli";
        marks=56.33;

    }
    void show()
    {
        cout<<"details are"<<endl;
        cout<<roll_no<<endl<<name<<endl<<marks;
    }
};
int main()
{
    student s;
    s.show();
}
