#include<iostream>
using namespace std;
int main() {
	int dec;
	int oct=0,temp=0,base=1;
	cin>>dec;
	
	while(dec!=0){
		temp=dec%8;
		oct+=temp*base;
		base=base*10;
		dec=dec/8;
	}
	cout<<oct<<endl;
	return 0;
}