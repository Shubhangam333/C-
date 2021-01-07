#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int prices[],int n,int span[]){
	stack<int> s; //indices of the days
	s.push(0);

	span[0]=1;

	for(int i=1;i<=n-1;i++){
		int currPrice=prices[i];
		//topmost element that is higher than current price
		while(!s.empty() and prices[s.top()]<=currPrice){
			s.pop();
		}
		if(!s.empty()){
			int prev_highest=s.top();
			span[i]=i-prev_highest;
		}else{
			span[i]=i+1;
		}

		s.push(i);
	}
}

int main(){
	int n;
	cin>>n;
	int prices[n];
	for(int i=0;i<n;i++){
		cin>>prices[i];
	}
	int span[100000] = {0};

	stockSpan(prices,n,span);
	for(int i=0;i<n;i++){
		cout<<span[i]<<" ";
	}
	cout<<"END";
}