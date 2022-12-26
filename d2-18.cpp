 #include<bits/stdc++.h>
using namespace std;
int main(){
	    string S ;
	    getline(cin,S);
        int i,j;
        string res;
        for(i=0;i<S.size();i++){
            for(j=0;j<S.size();j++){
                if(j<i){
                    res=res+'.';
                }
                else{
                 res=res+S[j];
                }
            }
      }
      cout<<res<<endl;
    
      
      return 0;
  }