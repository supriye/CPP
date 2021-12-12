#include<bits/stdc++.h>
using namespace std;

template<typename T> //Graph is Generic type

class Graph
{
  map<int , list<int> > l;

  public:
     void addEdge(int x,int y)
     {
         l[x].push_back(y);
         l[y].push_back(x);
     }
     void dfs_helper(int src,map<int,bool> &visited)
     {
        // Recursive function that will traverse the graph
        cout<<src<<" ";
        visited[src] = true;

        // go to all neighbour(nbr) of that node that is not visited
        for(int nbr:l[src])
        {
            if(!visited[nbr])
            {
                dfs_helper(nbr,visited);
            }
        }
     }

     void dfs(int src)
     {
         map<int,bool> visited;
        //  mark all the nodes as not visited in the begining
        for(auto x:l)
        {
            int node = x.first;
            visited[node] = false;
        }
        // call the helper function
        dfs_helper(src,visited);
         
     }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.dfs(0);

    return 0;
}