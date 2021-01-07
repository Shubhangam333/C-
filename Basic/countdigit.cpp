#include<iostream>
using namespace std;
int main() {
		int n;
		int r,temp=0,c=0;
		cin>>n>>r;
		while(n!=0){
			temp=n%10;
			if(temp==r){
				c++;
			}
			n=n/10;
		}
		cout<<c<<endl;
	return 0;
}