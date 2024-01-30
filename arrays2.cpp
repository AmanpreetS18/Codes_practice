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
if(section=="K21ND")
cout<<endl<<roll_no<<" "<<name<<" "<<section<<" "<<marks;
}
};
int main()
{
student s[3];// s[0],s[1],s[2]
int i;
for(i=0;i<=2;i++)
{
cout<<"Enter the detail of "<<i+1<<"student\n";
s[i].get();
}
for(i=0;i<=2;i++)
s[i].show();
}
