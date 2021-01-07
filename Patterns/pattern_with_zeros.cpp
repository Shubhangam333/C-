#include<iostream>
using namespace std;
int main() {
	  int n = 0;
	  cin>>n;
      int row=1;
      int nst=1;
      int value;
	  while(row<=n){
		  value=row;
		  for(int cst=1;cst<=nst;cst++){
              if(value==1){
                  cout<<"1";
                  break;
              }
			  if(cst==1||cst==nst){
				  cout<<value;
				  cout<<"\t";
			  }else{
				  cout<<"0";
				  cout<<"\t";
			  }
		  }
		  cout<<endl;
		  nst++;
          row++;
	  }
	return 0;
}