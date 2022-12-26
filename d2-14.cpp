#include <iostream>
using namespace std;
int main() {
 int n;
 cout<<"enter the rows:";
 cin>>n;
 int i,j,k;
  for(i=0;i<n;i++){
     for(j=1;j<=n;j++){
        if(i==0 || i==n-1){
           cout<<"*";
        }
        else {
           if(i+j==n){
              cout<<"*";
           }
           else{
              cout<<" ";
           
		         }
     }
     
  }
  cout<<endl;
 }
 
 return 0;
}
