#include<bits/stdc++.h>
using namespace std;

const int N=1e7+5;

int parent[N];
int size[N];

void make(int v)
{
    parent[v]=v;
    size[v]=1;
}

int find(int v)
{
    if(parent[v]==v)
    {
        return v;
    }

    return parent[v]=find(parent[v]);
}

void Union(int a,int b)
{
    a=find(a);
    b=find(b);

    if(a!=b)
    {
        if(size[a]<size[b])
        {
            swap(a,b);
        }
        parent[b]=a;
        size[a]+=size[b];
    }
}

int main()
{
    int n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++)
    {
        make(i);
    }

    vector<pair<int,pair<int,int>>>edges;
    while(k--)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }

    sort(edges.begin(),edges.end());
    
    int total_cost=0;
    for(auto &edge:edges)
    {
        int wt=edge.first;
        int u=edge.second.first;
        int v=edge.second.second;

        if(find(u)!=find(v))
        {
            Union(u,v);
            total_cost=total_cost+wt;
        }
    }

    cout<<total_cost<<endl;
}