#include<iostream>
using namespace std;
int main() {
	   int n = 0;
        cin>>n;
      int nst,row=1,nsp=n-1,nspp=n-2;
	  while(row<=n){
        for(int csp=1;csp<=nsp;csp++){
			cout<<" ";
		}
	    if(row==1 || row==n){
			nst=n;
		    for(int cst=1;cst<=nst;cst++){
				cout<<"*";
			}
		}else{
			cout<<"*";
			for(int csp=1;csp<=nspp;csp++){
			cout<<" ";
		}
		    cout<<"*";
		}
	   cout<<endl;	  
	   row++;
	   nsp=nsp-1;
	  }
	return 0;
}