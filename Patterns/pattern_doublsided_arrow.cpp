#include<iostream>
using namespace std;
int main() {
		int n=0;
		cin>>n;
        int row=1,nsp=n-1,nst=1,nspp=0,nstt=0;
		int value=0;
        while(row<=n){
			if(row<=(n+1)/2){
			value=row;
			}else{
				value=n-row+1;
			}
			for(int csp=1;csp<=nsp;csp++){
			    cout<<"  ";
			}
			if(row==1 || row==n){
				cout<<"1";
			}else{
			for(int cst=1;cst<=nst;cst++){
				if(cst!=nst){
					cout<<value-- << " ";
				}else{
					cout<<value-- ;
				}
			}
			value++;
			for(int cspp=1;cspp<=nspp;cspp++){
				cout<<" ";
			}
			for(int cst=1;cst<=nstt;cst++){
				if(cst!=nstt){
					cout<<value++ <<" ";
				}else{
					cout<<value++;
				}
			}
			}
			if(row==1){
				nst++;
				nstt=nstt+2;
				nsp=nsp-2;
				nspp=nspp+3;
			}else if(row<(n+1)/2){
				nst++;
				nstt++;
				nsp=nsp-2;
				nspp=nspp+4;
			}else{
                nst--;
				nstt--;
				nsp=nsp+2;
				nspp=nspp-4;
			}
			row++;
			cout<<endl;
		}
	return 0;
}