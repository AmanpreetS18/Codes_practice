// Template
// class template
// Defining the member outside the class
using namespace std;
#include<iostream>
template<class t1, class t2=char>
class abc
{
t1 a;
t2 b;
public:
abc(t1 a, t2 b)
{
this->a=a;
this->b=b;
}
void show()
{
cout<<a<<" "<<b;
cout<<endl;
}

};

int main()
{
abc <int>ob1(12,'t');
ob1.show();
abc <int,double> ob2(12,34.56);
ob2.show();
}
