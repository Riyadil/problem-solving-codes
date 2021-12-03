#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
 string s;
 cin>>s;
 int ss=0;

 int c=0;
 for(int i=0;i<n-1;i++)
 {
     if(s.substr(0,i+1)==s.substr(n-1-i))
     {
       ss=i+1;
     }
 }
 cout<<s;
 for(int i=0;i<m-1;i++)
 {
     cout<<s.substr(ss);
 }






}
