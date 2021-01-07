#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int remainder=0,reversedNumber=0;
 while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
	cout<<reversedNumber<<endl;
	return 0;
}