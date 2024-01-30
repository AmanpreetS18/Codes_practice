using namespace std;
#include<iostream>
class abc
{
    int a,b;
public:
    abc()
    {

    }
    abc(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    abc operator*(abc ob)
    {
        abc mul;
        mul.a=a*ob.a;
        mul.b=b*ob.b;
        return mul;

    }
    abc operator %(abc ob)
    {
        abc mod;
        mod.a=a%ob.a;
        mod.b=b%ob.b;
        return mod;
    }
    void show()
    {
        cout<<endl<<a<<" "<<b;
    }
};
int main()
{
    abc ob1(1,51),ob2(12,3),ob3(1,23),ob4;
    ob4=(ob1*ob2)%ob3;
    ob4.show();
}
