#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
     ifstream in;
     in.open("FIRST.TXT");
     ofstream out;
     out.open("SECOND.TXT");
     char ch;
     while(!in.eof())
     {
          in.get(ch);
          if(ch>=97 && ch<=122)
          {
               ch=toupper(ch);
          }
          else if(ch>=65 && ch<=90)
          {


          ch=tolower(ch);
          }
          out<<ch;
     }
     cout<<"Content is Copied";
     in.close();
     out.close();
     return 0;
}
