// Template
// class template
using namespace std;
#include<iostream>
template<class t>
class abc
{
t a,b;
public:
abc(t a, t b)
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
abc <int> ob1(12,34);
ob1.show();
abc <float> ob2(12.34f,45.67f) ;
ob2.show();
abc <string> ob3("abc","def");
ob3.show();
}
