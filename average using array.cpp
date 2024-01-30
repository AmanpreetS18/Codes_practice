/*Write a program to declare an array of 10 double. Input the elements and
calculate the average of them.*/
using namespace std;
#include<iostream>
int main()
{
    double a[10],sum=0;
    int i;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
    cout<<"average is "<<sum/10;


}
