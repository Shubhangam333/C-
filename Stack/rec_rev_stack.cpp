#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int data=s.top();
	s.pop();
	insertAtbottom(s,x);
	s.push(data);
}

void reverse(stack<int>&s1){
	if(s1.empty()){
		return;
	}
	int x=s1.top();
	s1.pop();
	reverse(s1);
	insertAtbottom(s1,x);
}

int main(){
	stack<int> s1;
	
	for(int i=0;i<5;i++){
		s1.push(i);
	}
	
	// while(!s1.empty()){
	// 	cout<<s1.top()<<endl;
	// 	s1.pop();
	// }
	reverse(s1);
	while(!s1.empty()){
		cout<<s1.top()<<endl;
		s1.pop();
	}
	return 0;
}