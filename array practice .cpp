/*Write a program to input an array of 10 integers and replace all the even elements by 0.
 Print the updated array.*/
 using namespace std;
 #include<iostream>
 int main()
 {
     int a[10],i;
     cout<<"enter elements "<<endl;
     for(i=0;i<10;i++)
     {
         cin>>a[i];
         if(a[i]%2==0)
            a[i]=0;
     }
cout<<"updated array is";
for(i=0;i<10;i++)

{
    cout<<a[i]<<endl;
}

 }
