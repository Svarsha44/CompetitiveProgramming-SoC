#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
#define vi vector<long long> 
#define loop(i,a,b) for (ll i = a; i < b; i++) 
#define watch(x) cout << (#x) << " is " << x << "\n";

ll maxsum(vi & vec)
{
    ll max_sum=INT64_MIN;
    ll count=0;

    for(ll  num : vec)
    {
        count=max(count+num,num);
        max_sum=max(max_sum,count);
    }

    return max_sum;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll num;
    cin>>num;
    vi list(num);
    loop(i,0,num) cin>>list[i];

    cout<<maxsum(list);
}
