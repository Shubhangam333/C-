#include<iostream>
using namespace std;

void stairSearch(int a[][100],int n,int m,int target){
	if(target<a[0][0] || target>a[n-1][m-1]){
		cout<<0;
		return;
	}
	  for(int row = 0;row < n;) 
    {
        for(int col=m-1;col>=0 and row<n;) 
        {
            if(a[row][col]==target) 
            {
                cout<<1;
                return;
            }
            else if(a[row][col]>target) 
            {
                col--;
            }
            else 
            {
                row++;
            }
        }
    }
    cout<<0;
    return ;

}
int main() {
	int a[100][100];
	int n,m,target;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cin>>a[i][j];
		}	
	}
	cin>>target;
	stairSearch(a,n,m,target);
	return 0;
}