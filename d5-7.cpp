#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n],i;
   for(i=0;i<n;i++){
   	cin>>a[i];
   }
   //reversing 
   cout<<"reverse order:"<<endl;
   for(i=n-1;i>=0;i--){
   	   cout<<" "<<a[i];
   }
	

return 0;
}
