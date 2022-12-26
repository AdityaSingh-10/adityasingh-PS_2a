#include<bits/stdc++.h>
using namespace std;
 int main(){
 int n,i,j,k;
 cout<<"enter rows:"<<endl;
 cin>>n;
 for(i=1;i<=n;i++){
 	for(j=1;j<=i;j++){
 		cout<<j;
	 }
	  // Prints spaces between two parts
        for(j=i*2; j<n*2; j++)
        {
            cout<<" ";
        }
    //reverse pattern
	for(j=i;j>=1;j--){
		cout<<j;
	}    
	cout<<endl;
}

	


return 0;
}
