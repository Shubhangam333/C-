#include <iostream>
#include <map>
#include<queue>
#include<list>
#include<climits>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> l;
public:
    void addEdges(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }    

    void bfs(T src){
        map<T,int> dist;
        queue<T> q;
  
        //All other nodes will have int_max
        for(auto node_pair:l){
            T node = node_pair.first;
            dist[node]=INT_MAX;
        }

        q.push(src);
        dist[src]=0;

        while(!q.empty()){
            T node=q.front();
            q.pop();
  cout<<node;
            for(int nbr:l[node]){
                if(dist[nbr]==INT_MAX){
                    q.push(nbr);
                    //mark nbr as visited
                    dist[nbr]=dist[node]+1;
                }
            }
        }
        //print the dist to every other node
        for(auto node_pair:l){
            T node = node_pair.first;
            int d = dist[node];
            cout<<"Node"<<node<<"Dist from src"<<d<<endl;
        }
    }
};
int main() {
    Graph <int> g;
    g.addEdges(1,2);
    g.addEdges(2,3);
    g.addEdges(1,3);
    g.addEdges(3,4);

    g.bfs(1);
}