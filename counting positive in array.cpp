/*write a program to input a array of 10 inegers and
 count the number of positive, negative and zeros present in the array.*/
using namespace std;
#include<iostream>
int main()
{
    int a[10],i,p=0,q=0,r=0;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];

   if(a[i]>0)
       p++;
   else if(a[i]<0)
       q++;
   else
       r++;
    }
    cout<<"positive ,negative and zeroes are"<<p<<" "<<q<<" "<<r;
}
