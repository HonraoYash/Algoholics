#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s;
 int n,flag=0;
 getline(cin,s);
 cin>>n;
 int x=s.length();
 char a[n][x];
 for(int i=0;i<n;i++)
 {
 for(int j=0;j<x;j++)
 {
 a[i][j]='0';
 }
 }
 int j=0;
 for(int i=0;i<x;i++) //MAIN OPERATION X-FOR COLUMNS AND J FOR 
 { ROWS
 if(flag==0)
 {
 a[j][i]=s[i];
 j++;
 if(j==n-1)
 {
 // a[j][i]=s[i];
 flag=1; //ON HITTING THE BOTTOMMOST ROW
 }
 }
 else if(flag==1)
 {
 a[j][i]=s[i];
 j--;
 if(j==0)
 {
 flag=0; //ON HITTING THE TOPMOST ROW
 }
 }
 
 }
 for(int i=0;i<n;i++) //PRINTING ELEMENTS
 {
 for(int j=0;j<x;j++)
 {
 cout<<a[i][j]<<"\t";
 }
 cout<<"\n";
 }
