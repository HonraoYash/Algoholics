#include<iostream>
#include<string>
using namespace std;
int main()
{
 int n,x,y;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
 cin>>x>>y;
 a[i]=x+y;
 }
 for(int i=0;i<n;i++)
 {
 cout<<a[i]<<endl;
 }
} 
