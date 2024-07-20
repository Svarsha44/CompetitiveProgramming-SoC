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



vector<int> traversal(vector<int> adj[] ,int start,int vis[],int n,int distance[])
{
    vis[start]=1;
    queue<int> q;
    q.push(start);
    vector<int>prev(n+1,0);
    
    
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        
        vector<int>level;
        for(int num: adj[node])
        {   
            if(!vis[num])
            {   
                level.push_back(num);
                vis[num]=1;
                distance[num]=distance[node]+1;
                prev[num]=node;
                q.push(num);
            }
        }
    }
 return prev;
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
    int distance[n+1]={0};
    vector<int> prev=traversal(adj,1,vis, n,distance);
    
    if(vis[n]!=1) cout<<"IMPOSSIBLE"<<endl;
    else {cout<<distance[n]+1<<endl;

    int last=n;
    deque<int>comp;
    comp.push_front(n);

    while(last!=1)
    {
        comp.push_front(prev[last]);
        last=prev[last];
    }

    for(auto num: comp)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    }
    

}
