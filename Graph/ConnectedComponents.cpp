#include<bits/stdc++.h>
using namespace std;

vector<bool> vis;
int v,e;  //v = no. of vertices,e = no.of edges
vector<vector<int>> adj;  //adj = adjacency list
vector<int> components;

int get_comp(int idx)
{
    if(vis[idx])
    {
        return 0;
    }
    vis[idx]=true;
    int ans = 1;
    for(auto i : adj[idx])
    {
        if(!vis[i])
        {
            ans += get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}

int main()
{
    cin>>v>>e;
    adj = vector<vector<int>>(v);
    vis = vector<bool>(v,0);
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            components.push_back(get_comp(i));
        }
    }
    for(auto i : components)
    {
        cout<<i<<" ";
    }
    return 0;
}