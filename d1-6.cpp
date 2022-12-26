#include<bits/stdc++.h>
using namespace std;
int main(){
 int a,b,c;
 cin>>a>>b>>c;
 if(a==b && a==c){
 	cout<<"equilateral"<<endl;
 }
 else if(a==b && a!=c){
 	cout<<"isoceles"<<endl;
 }
 else
 cout<<"scalene"<<endl;



return 0;
}
