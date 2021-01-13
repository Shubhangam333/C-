#include <iostream>
#include <map>
#include<queue>
#include<list>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> l;
public:
    void addEdges(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }    
    void dfs_helper(T src, map<T,bool> &visited){
        //Recursive function that will traverse the  graph

        cout<<src<< " ";
        visited[src]=true;
        //go to all neighbor of that node that is not visited
        for(T nbr:l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited);
            }
        }
      
    }
    void dfs(T src){
        map<T,bool> visited;
        //Mark all nodes as not visited in the beginning
        for(auto p:l){
            T node=p.first;
            visited[node]=false;
        }
        //call the helper function
          dfs_helper(src,visited);
        //Iterate over all vertices and init a dfs call
        for(auto p:l){
            T node = p.first;
            int cnt=0;
            if(!visited[node]){
                cout<<"Component"<<cnt<<" ";
                dfs_helper(node,visited);
            }
        }  
    }
};
int main() {
    Graph <int> g;
    g.addEdges(0,1);
    g.addEdges(1,2);
    g.addEdges(2,3);
    g.addEdges(3,4);
    g.addEdges(4,5);
    g.addEdges(3,0);

    g.dfs(0);
}
