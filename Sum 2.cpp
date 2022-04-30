#include<iostream>
#include<string>
using namespace std;
int main()
{
 string n;
 int temp=0;
 cin>>n;
 
 int x=n.length();
 
 for(int i=0;i<x-1;i++) //ITERATING THROUGH INDIVIDUAL ELEMENTS OF 
 {                                   THE STRING
 if(n[i]=='3' && n[i+1]=='5')
 { 
 n.erase(i,2);
 i-=2;                 //TO CHECK IF AFTER DELETING A PAIR OF 3,5 IS ONE
 }                             MORE PAIR GETTING FORMED
 }
 
 cout<<n;
 
}
