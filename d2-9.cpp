#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,k;
  int n;
  cin>>n;
  for(i=1;i<=n;i++){
  	for(j=1;j<=n-i;j++){
  		cout<<" ";
	}
       for(k=1;k<=2*i-1;k++){
       	cout<<"*";
	   }
     cout<<endl;
}
 for(i=n;i>=1;i--){
 	for(j=1;j<=n-i;j++){
 		cout<<" ";
	 }
	 for(k=1;k<=2*i-1;k++){
	 	cout<<"*";
	 }
	 cout<<endl;
 }
       
    
return 0;

}