//Author name: Bhavesh Gupta
//Question link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/strings-1/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
int t;
string n,m;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n>>m;
if(n == m)
cout<<"YES"<<endl;
else if(n.length() == m.length())
{
if((n=="2" && m=="4") || (n=="4" && m=="2"))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
else
cout<<"NO"<<endl;
}
}
