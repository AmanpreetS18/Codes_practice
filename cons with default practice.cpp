/*Write a program to declare a class student with id,name and section.
 Make a parameterized constructor to
 initliaze the data memebrs of class.
 Give the default vale to section as "KOC01".*/
 using namespace std;
 #include<iostream>
 class student
 {
     int id;
     string name,section;
     public:
        student(int i,string n,string s="KOC01")
        {
            id=i;
            name=n;
            section=s;

        }
        void show()
        {
            cout<<"details are "<<endl;
            cout<<id<<endl<<name<<endl<<section;
        }
 };
 int main()
 {
     student s(12,"mohit");
     s.show();
 }
