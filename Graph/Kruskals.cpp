// Properties
// <1> number of Vertices Should be Same
// <2> edge shoub be |v-1|
// No Cycle Formed

// Time Complexity:O(E log E)

#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
       int source;
       int dest;
       int weight;
};

bool compare(Edge e1, Edge e2)
{
    return e1.weight < e2.weight;
}

int find_parent(int v, int *parent)
{
  if(parent[v] == v)
  {
      return v;
  }
  return find_parent(parent[v], parent);
}

void kruskals(Edge *input, int n, int e)
{
    // sort the input array - based on weights(increasing order)
    sort(input, input+e,compare);

    Edge *output = new Edge[n-1];

    int *parent = new int[n];

    for(int i=0;i<n;i++)
    {
        parent[i]=i;
    } 

    int count = 0;
    int i = 0 ;
    while(count != n-1)
    {
        Edge currentEdge = input[i];

        // check if we can add the currentEdge in MST or not.
        int source_parent = find_parent(currentEdge.source,parent);
        int dest_parent = find_parent(currentEdge.dest,parent);

        if(source_parent != dest_parent)
        {
            output[count] = currentEdge;
            count++;
            parent[source_parent] = dest_parent;
        }
        i++;
    }
    for(int i=0;i<n-1;i++)
    {
        if(output[i].source < output[i].dest)
        {
             cout << output[i].source << " " << output[i].dest 
             << " " << output[i].weight << endl;
        }
        else
        {
           cout << output[i].dest << " " << output[i].source 
             << " " << output[i].weight << endl;
        }
      
    }
}

int main()
{
    int n,e; //n = no.of vertices,e = edge
    cin >> n >> e;
    Edge *input = new Edge[e];

    for(int i=0; i<e;i++)
    {
        int s,d,w;
        cin >> s >> d >> w;

        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
    }
    kruskals(input,n,e);

    return 0;
}