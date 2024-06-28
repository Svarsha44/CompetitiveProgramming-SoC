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

ll  subarraynum(vi &vec,ll n)
{
    ll rem=0,count=0;
    map<ll,ll>remcount;
    remcount[0]=1;

    loop(i,0,n)
    {
        rem=((rem+vec[i])%n+n)%n;
        count+=remcount[rem];
        remcount[rem]++;

    }
    return count;
}

signed main()
{
    ll n;
    cin>>n;

    vi vec(n);

    loop(i,0,n) cin>>vec[i];

    cout<<subarraynum(vec,n);
}
