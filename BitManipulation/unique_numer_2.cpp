#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int temp=0;
	int no;
	for(int i=0;i<n;i++){
		cin>>no;
		temp=temp^no;
	}
	cout<<temp;
	return 0;
}