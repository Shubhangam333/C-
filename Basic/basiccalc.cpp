#include<iostream>
using namespace std;
int main() {
	while(1)
{
	char ch;
	cin>>ch;
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
	{
		long long int n1,n2,n3;
		cin>>n1>>n2;
		if(ch=='+')
		n3=n1+n2;
		else if(ch=='-')
		n3=n1-n2;
		else if(ch=='*')
		n3 = n1*n2;
		else if(ch=='/')
		{
			if(n2==0)
			break;
			else
			n3 = n1/n2;
		}
		else if(ch=='%')
		{
			if(n2==0)
			break;
			else
			n3 = n1%n2;
		}
      cout<<n3<<endl;
	}
	else if(ch=='X'||ch=='x')
	break;

	else
	{
		cout<<"Invalid operation. Try again."<<endl;
		continue;
	}
}
	return 0;
}