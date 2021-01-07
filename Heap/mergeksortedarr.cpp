#include <iostream>
#include<queue>
using namespace std;
typedef pair<int,pair<int,int>> node;
vector<int> mergeKsortedArray(vector<vector<int>> arr){
    vector<int> result;
    priority_queue<node,vector<node>,greater<node>> pq;//min pq
    //Insert 0 element of every array in pq
    for(int i=0;i<arr.size();i++){
        pq.push({arr[i][0],{i,0}}); //element,array index,element index
    }
    while(!pq.empty()){
    node current=pq.top();
    pq.pop();
    int element=current.first;
    int x=current.second.first;//row in which element is present
    int y=current.second.second;//column in which element is present

    result.push_back(element);
    if(y+1<arr[x].size()){
        pq.push({arr[x][y+1],{x,y+1}});
    }
    }
    return result;
}
int main() {
	int k,n;
	cin>>k>>n;
    vector<vector<int>>arr(k);
	for(int i=0;i<k;i++){
		arr[i] = vector<int>(n); 
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
    vector<int>output=mergeKsortedArray(arr);
    for(int x:output){
        cout<<x<<" ";
    }                        
}
