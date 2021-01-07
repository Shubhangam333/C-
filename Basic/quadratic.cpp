#include<iostream>
#include<cmath>
using namespace std ;
int main() {
    int a , b , c , d ;
	cin>>a>>b>>c;
    d = (b*b - 4*a*c);
	if (d==0)
		{cout<<"Real and Equal"<<endl<< ((-1.0*b) / (2.0*a))<<" "<<((-1.0*b) / (2.0*a));}
	else {if (d>0){cout<<"Real and Distinct"<<endl<< ((-1.0*b-sqrt(d))/ (2.0*a))<<" "<<((-1.0*b+sqrt(d))/ (2.0*a));}
          else {cout<<"Imaginary";}


	}
	return 0;}