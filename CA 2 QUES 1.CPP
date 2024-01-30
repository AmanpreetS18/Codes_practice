using namespace std;
#include<iostream>
#include<fstream>
int main()
{
    ifstream infile("hello.txt");
    ofstream outfile("hello.txt");
    char ch;
     if(!infile)
     {
         cout<<"no file exists";

     }
     if(!outfile)
     {
         cout<<"file creation failed";
     }
     while(!infile.eof())
     {
         infile.get(ch);
         ch=tolower(ch);
         outfile<<ch;
     }
     infile.close();
     outfile.close();
}
