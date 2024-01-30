/*Write a program to create a class which contain a member function for
 calculating graeter of 2 integers, 2 floats and 2 doubles*/
using namespace std;
#include<iostream>
template <class t>
class large
{
    t a,b;
public:
    large(t a,t b)
    {
        this->a=a;
        this->b=b;
    }
    void show()
    {
        if(a>b)
            cout<<"a is greater than b\n";
        else
            cout<<"b is greater than a\n";
    }
};
int main()
{

    large <int> l1(56,89);
    l1.show();
     large <float> l2(56.59f,8.9f);
    l2.show();
     large <double> l3(12.6658,89.625);
    l3.show();
}
