#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;

#define mod 1000000007
#define vi vector<long long> 
#define pi pair<long long,long long> 
#define vvi vector<vector<long long>>
#define pb push_back
#define loop(i,a,b) for (ll i = a; i < b; i++) 
#define watch(x) cout << (#x) << " is " << x << "\n";



int traversal(vector<int> adj[] ,int start,int vis[],int n)
{
    vis[start]=1;
    queue<int> q;
    q.push(start);
    vector<int>bfs;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(int num: adj[node])
        {
            if(!vis[num])
            {
                vis[num]=1;
                q.push(num);
            }
        }
    }

    return bfs[bfs.size()-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int vis[n+1]={0};
    int components=0;
    vector<pair<int,int>> bridges;
    int last=0;

    for(int i=1; i<n+1; i++)
    {
        if(vis[i]!=1){
            components++;
            if(i!=1) bridges.push_back({last,i});
            last=traversal(adj,i,vis, n);
        }
    }

    cout<<components-1<<endl;
    for(auto num: bridges)
    {
        cout<<num.first<<" "<<num.second<<endl;
    }
}


