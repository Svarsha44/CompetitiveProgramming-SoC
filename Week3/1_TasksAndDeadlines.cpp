#include<bits/stdc++.h>
using namespace std;

typedef int64_t ll;

#define mod 1000000007
#define vi vector<long long> 
#define pi pair<long long,long long> 
#define vvi vector<vector<long long>>
#define pb push_back
#define loop(i,a,b) for (ll i = a; i < b; i++) 
#define watch(x) cout << (#x) << " is " << x << "\n";


signed main()
{
    ll n;
    cin>>n;

    vector<pi> tasks;
    
    loop(i,0,n)
    {
        ll a,b;
        cin>>a>>b;
        tasks.pb({a,b});
    }

    sort(tasks.begin(),tasks.end());

    ll reward=0,endtime=0;

    loop(i,0,n)
    {
        endtime+=tasks[i].first;
        reward+= tasks[i].second-endtime;
    }

    cout<<reward;

}
