//Write a program to calculate simple interest by using function with default arguments. Take rate as default value of 5 .
using namespace std;
#include<iostream>
double interest(double p,double t,double r=5);
int main()
{
cout<<"SI is:"<<interest(15000,54)<<endl;
cout<<"SI is:"<<interest(15000,54,8);

}
double interest(double p,double t,double r)
{
  return(p*t*r)/100;
}
