using namespace std;
#include<iostream>
#include<string>
int main()

{
   string s1="hello world";
   cout<<s1.find("o")<<endl;
cout<<s1.rfind("o")<<endl;
cout<<s1.find_first_of("o")<<endl;
cout<<s1.find_last_of("o")<<endl;
cout<<s1.at(5);
//cout<<s1.replace(1,3,"@@@");// for h123lo world = h@@@lo world


}
