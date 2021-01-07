#include<iostream>
using namespace std;
char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void recursive(int n){
	if(n==0){
		return;
	}
	recursive(n/10);
	int temp=n%10;
	cout<<words[temp]<<" "<<endl;
	
	return;
}
int main(){
	int n;
	cin>>n;
	recursive(n);
	return 0;
}