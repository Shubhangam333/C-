#include<iostream>
using namespace std;

int main(){
	int n,a,dec,temp,base=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		temp=0;
		base=1;
		dec=0;
        while(a!=0){
        	temp=a%10;
        	dec+=temp*base;
        	base=base*2;
        	a=a/10;
        }
        cout<<dec<<endl;
	}
	return 0;
}