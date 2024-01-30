/*Write a program to declare a class student with roll_no,name and marks. Initalize the data members
using default constructor as values 1,"mohit kumar " and 345.
 Initliaze the another object with parameteried constructor
 and print the details.*/
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
        roll_no=1;
        name="mohit";
        marks=345;
    }
    student(int r,string n,double m)
    {
        roll_no=r;name=n;
        marks=m;
    }
    void show()
    {
        cout<<"details are"<<endl;
        cout<<roll_no<<endl<<name<<endl<<marks;
    }
 };
 int main()
 {
     student s1,s2(1,"mohit",345);
     s1.show();
     s2.show();
 }
