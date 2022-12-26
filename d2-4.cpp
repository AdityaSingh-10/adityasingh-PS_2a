#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,n;
  cin>>n;
  char a='A';
  for(i=0;i<n;i++){
  	for(j=0;j<=i;j++){
  		cout<<a;
  		a++;
	  }
	  a=a-i;
	  cout<<endl;
  }


return 0;
}
