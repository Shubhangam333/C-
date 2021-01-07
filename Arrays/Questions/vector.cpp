#include<iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> a;
	vector<int> b(5,10);
	vector<int> c(b.begin(),b.end());

	vector<int> d{1,2,3,4,5,6};
	for(int i=0;i<c.size();i++){
		cout<<c[i]<<",";
	}

	for(auto it=c.begin();it<c.end();it++){
		cout<<(*it)<<",";
	}
	cout<<endl;
	//for each loop
	for(int x:d){
		cout<<x<<",";
	}
	vector<int> v;
	int n;
	cin>>n;
	int no;
	for(int i=0;i<n;i++){
		cin>>no;
		v.push_back(no); //adds number to end of vector
	}
	for(int x:v){
		cout<<x<<",";
	}
	return 0;
}