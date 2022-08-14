#include <bits/stdc++.h>
using namespace std;
int n,m;
struct edge
{
    int to;
};
vector<edge> edges[100010];
inline void add(int from,int to)
{
    edge e = {to};
    edges[from].push_back(e);
}
inline int js(int x)
{
    int ans = 0;
    for(int i=0;i<edges[x].size();++i)
    {
        ans = max(ans,edges[x][i].to);
    }
    return ans;
}
int main()
{
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin >> u >> v;
        add(u,v);
    }
    for(int i=1;i<=n;i++)
    {
        cout << js(i) << " "; 
    }    
    return 0;
}