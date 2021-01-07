#include<cstring>
#include<iostream>
#include "hashtable.h"
using namespace std;

int main(){
	Hashtable<int> price_menu;

	price_menu.insert("Burger",120);
	price_menu.insert("Pepsi",30);
	price_menu.insert("Noodles",70);
	price_menu.insert("colddrink",150);
	price_menu.insert("Ham",50);

	price_menu.print();

	int *price=price_menu.search("Noodles");
	if(price==NULL){
		cout<<"Not Found";
	}else{
		cout<<"Price is"<<*price<<endl;
	}
	return 0;
}