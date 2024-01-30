//arrays in c++ print those whose marks>50
using namespace std;
#include<iostream>
class student
{
    int roll_no;
    string name,section;
    float marks;
public:
    void get()
    {
        cin>>roll_no;
        fflush(stdin);
        getline(cin,name);
        getline(cin,section);
        cin>>marks;
    }
    void show()
    {
        if(marks>50)
            cout<<endl<<roll_no<<" "<<name<<" "<<section<<" "<<marks;
    }
};
int main()
{
    student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"enter the detail of  "<<i+1<<"student\n";
        s[i].get();
    }
    for(i=0;i<3;i++)
        s[i].show();
}
