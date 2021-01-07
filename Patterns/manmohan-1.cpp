// 6
// 1
// 11
// 111
// 1001
// 11111
// 100001
#include<iostream>
using namespace std;
int main() {
	int n,row=1,nst=1;
	cin>>n;
	while(row<=n){
		if(row%2!=0){
		for(int i=0;i<nst;i++){
			cout<<"1";
		}
		}else{
			for(int i=0;i<nst;i++){
			if(i==0 || i==nst-1){
			cout<<"1";
			}else{
              cout<<"0";
			}
		  }	
		}
		cout<<endl;
		row++;
		nst++;
	}
	return 0;
}