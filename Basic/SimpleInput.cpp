#include<iostream>
using namespace std;
int main() {
	int i,s=0,a[1000];
	
	for(i=0;;i++){
		cin>>a[i];
		s=s+a[i];
		if(s<0)
			break;
		cout<<a[i]<<endl;
	}
	return 0;
}