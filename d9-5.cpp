#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int c=0;
   while(n>0){
       if(n%2==0){
           n=n/2;
           c++;
       }
       else{
           n=n-1;
           c++;
       }
   }
   cout<<c<<endl;
   
    return 0;
}