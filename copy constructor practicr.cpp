/*Write a program to declare a class employee with id ,name and salary. Initiliaze the data members uding default constructor as 1, "Mohit Kumar", 50000.
 Copy this content to another object and print it.*/
 using namespace std;
 #include<iostream>
 class employee
 {
     int id;
     string name;
     double salary;
 public:
    employee()
    {
        id=1;
        name="mohit";
        salary=50000;

    }
    employee( employee &e)
    {
        id=e.id;
        name=e.name;
        salary=e.salary;
    }
    void show()
    {
        cout<<"details are"<<endl;
        cout<<id<<endl<<name<<endl<<salary;
    }
 };
 int main()
 {
     employee e1;
     employee e2=e1;
     e1.show();
     e2.show();
 }
