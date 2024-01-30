using namespace std;
#include<iostream>
template <class t>
class abc
{
    t a,b,c;
public:
    abc(t a,t b)
    {
        this->a=a;
        this->b=b;
    }
    void swapp()
    {
        c=a;
        a=b;
        b=c;
        cout<<a<<" "<<b;
        cout<<endl;
    }
};
int main()
{
    abc <int> s1(12,58);
    s1.swapp();
    abc <float> s2(12.54f,65.8f);
    s2.swapp();
    abc <char> s3('a','d');
    s3.swapp();
}
