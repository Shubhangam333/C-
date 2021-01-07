#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int a[][1000],int n){
	for(int row=0;row<n;row++){
		int start_col=0;
		int end_col=n-1;
		while(start_col<end_col){
			swap(a[row][start_col],a[row][end_col]);
			start_col++;
			end_col--;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i<j){
					swap(a[i][j],a[j][i]);
				}
			}
		}
	}
}

void rotate_stl(int a[][1000],int n){
	for(int i=0;i<n;i++){
		reverse(a[i],a[i]+n);
	}
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i<j){
					swap(a[i][j],a[j][i]);
				}
			}
		}
}
int main(){
	int a[1000][1000] = {0};
	int m, n;
	cin >> m >> n;


	//Iterate Over the array
	int val = 1;

	for (int row = 0; row <= m - 1; row++) {
		for (int col = 0; col <= n - 1; col++) {
			a[row][col] = val;
			val = val + 1;
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
	rotate(a,n);
	rotate_stl(a,n);
		for (int row = 0; row <= m - 1; row++) {
		for (int col = 0; col <= n - 1; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
	return 0;
}