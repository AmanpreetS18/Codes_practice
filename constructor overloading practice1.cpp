/*write a program to declare a class calculate which will calculate the sum of 2 integers, 2 doubles and 2 floats
using constructor overloading.*/
using namespace std;
#include<iostream>
class calculate
{
public:
    calculate(int a,int b)
    {
        cout<<"sum of int is "<<a+b<<endl;
    }
    calculate(double a,double b)
    {
        cout<<"sum of double is "<<a+b<<endl;
    }
    calculate(float a,float b)
    {
        cout<<"sum of float is "<<a+b<<endl;
    }
};
int main()
{
    calculate c1(12,56),c2(45.35,4886.24),c3(12.25f,564.35f);
}
