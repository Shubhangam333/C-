#include<iostream>
using namespace std;


// Kaden's Algorithm

int main() {


	int n;
	cin >> n;
	int ms=0;
	int cs=0;

	int a[1000];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cs = cs +a[i];
		if(cs<0){
			cs=0;
		}
		ms=max(cs,ms);
	}
	cout<<"Maximum sum is"<<ms<<endl;
	return 0;
}