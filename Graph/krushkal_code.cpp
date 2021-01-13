#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//DSU DATA STRUCTURE
class DSU{
    int *parent;
    int *rank;
  public:
    DSU(int n){
        parent = new int[n];
        rank = new int[n];

        //parent -1,rank 1
        for(int i=0;i<n;i++){
            parent[i]=-1;
            rank[i]=1;
        }
    }  
    //Find function
    int find(int i){
        //base case
        if(parent[i]==-1){
            return i;
        }
        //otherwise
        return parent[i]=find(parent[i]);
    }

    //Unite function
    void unite(int x,int y){
        int s1=find(x);
        int s2=find(y);

        if(s1!=s2){
            //union by rank
            if(rank[s1]<rank[s2]){
                parent[s1]=s2;
                rank[s2]+=rank[s1];
            }else{
                parent[s2]=s1;
                rank[s1]+=rank[s2];
            }
        }
    }

};

class Graph{
    vector<vector<int>> edgelist;
    int V;
 public:
    Graph(int V){
        this->V=V;
    }
    void addEdge(int x,int y,int w){
        edgelist.push_back({w,x,y});
    }
}
int main() {
    cout<<"Hello World!";
}
