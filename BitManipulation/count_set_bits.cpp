#include<iostream>
using namespace std;
int count_bits(int a){
	int count=0;
	while(a>0){
		if(a&1){
			count++;
		}
	  a=a>>1; 		
	}
	return count;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<count_bits(a)<<endl;
	}
	return 0;
}