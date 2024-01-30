#include <iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the number of elements\n";
	cin>>n;

	double *a = new double[n];
	double sum=0,avg;
	cout<<"Enter the elements of array\n";
	for(i=0;i<=n-1;i++)
	cin>>a[i];


	for(i=0;i<=n-1;i++)
	sum=sum+a[i];
	avg=sum/n;
	cout<<"Average is "<<avg;
	delete []a;// will deallocate memory allocated.
}
