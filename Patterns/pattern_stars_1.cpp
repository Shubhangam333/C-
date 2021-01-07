#include<iostream>
using namespace std;
int main() {
	 int n = 0;
	 cin>>n;
     int row=1;
     int nst=0,num=n,value;
	 while(row<=n){
		 value=1;
		for(int csm=1;csm<=num;csm++){
			cout<<value<<" ";
			value++;
		}
		for(int cst=1;cst<=nst;cst++){
			cout<<"*"<<" ";
		}
		cout<<endl;
		if(nst==0){
			nst++;
		}else{
		nst=nst+2;
		}
		num--;
		row++;
	 }
	return 0;
}