#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int target;
	cin>>target;
	sort(a,a+n);
	int start=0,end=n-1;
	while(start<end){
		if(a[start]+a[end]==target){
			cout<<a[start]<<" and "<<a[end];
			start++;
			end--;
		}else if(a[start]+a[end]>target){
			end--;
		}else{
			start++;
		}
		cout<<endl;
	}
	return 0;
}