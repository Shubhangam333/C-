#include<iostream>
#include<climits>
using namespace std;
int main() {
	int a[1000];
	int n;
	int max = INT_MIN;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<max<<endl;
	return 0;
}