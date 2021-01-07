#include<iostream>
using namespace std;
int main() {
	 int n = 0;
	 cin>>n;
     int row=1;
     int nst=n-1,num=1,value;
	 while(row<=n){
		 value=1;
		for(int csm=1;csm<=num;csm++){
		   cout<<value;
			value++;
		}
		for(int cst=1;cst<=nst;cst++){
			cout<<"*";
		}
		cout<<endl;
		nst--;
		num++;
		row++;
	 }
	return 0;
}