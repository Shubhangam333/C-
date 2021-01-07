#include<iostream>
using namespace std;
int main() {
		  int num=0;
		  cin>>num;
		  int n =(num+1)/2;
		   
		   
		  for(int i=0;i<n;i++)
		  {
		  for(int j=0;j<n;j++)
		   
		  {
		  if(j<n-i)
		  cout<<"*"<<"\t";
		  else
		   
		  cout<<"\t";
		   
		  }
		  for(int j=1;j<n;j++)
		   
		  {
		   
		   
		  if(j<i)
		  cout<<"\t";
		  else
		   
		  cout<<"*"<<"\t";
		  }
		   
		   
		  cout<<endl;
		   
		  } // 
		  for(int i=2;i<=n;i++)
		  {
		  for(int j=0;j<n;j++)
		   
		  {
		  if(j<i)
		  cout<<"*"<<"\t";
		  else
		   
		  cout<<"\t";
		   
		  }
		  for(int j=1;j<n;j++)
		   
		  {
		   
		   
		  if(j<n-i)
		  cout<<"\t";
		  else
		   
		  cout<<"*"<<"\t";
		  }
		   
		   
		  cout<<endl;
		   
		  }
	return 0;
}