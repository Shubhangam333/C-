#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=0,min_index=0;
	for(int i=0;i<n-1;i++){
		min=a[i];
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				min=a[j];
				min_index=j;
			}
		}
			int temp=a[i];
			a[i]=a[min_index];
			a[min_index]=temp;
	}
	for(int k=0;k<n;k++){
		cout<<a[k]<<" ";
	}
	return 0;
}