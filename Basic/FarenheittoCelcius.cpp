#include<iostream>
using namespace std;


int main(){

	int f ,end,step;
	cin>>f;
	cin>>end;
	cin>>step;
	int c;

	while(f<=end){
		c = (5*(f-32))/9;
		cout<<f<<" "<<c <<endl;
		f = f + step;
	}



	return 0;
}