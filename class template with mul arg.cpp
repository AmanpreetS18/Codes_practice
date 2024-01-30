// Template
// class template
using namespace std;
#include<iostream>
template<class t1, class t2>
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
abc <int,float> ob1(12,34.56f);
ob1.show();
abc <double,char> ob2 (12.56,'y');
ob2.show();
}
