#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int no;
	int res=0;
	int a[100000];
	for(int i=0;i<n;i++){
		cin>>no;
		a[i]=no;
		res=res^no;
	}
	//xor=a^b
	int temp=res;
	int pos=0;
	while((temp&1)!=1){
		pos++;
		temp = temp>>1;
	}

	//First set bit in xor is at position pos
	int mask =(1<<pos);

	int x=0;
	int y=0;
	//find those numbers which contains set bit at pos
	for(int i=0;i<n;i++){
		if((a[i]&mask)> 0){
			x=x^a[i];
		}
	}

	y=res^x;

	cout<<min(x,y)<<" "<<max(x,y)<<endl;
	return 0;
}