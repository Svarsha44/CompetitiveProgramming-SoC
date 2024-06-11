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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a,b,diff;
    cin>>a>>b>>diff;
    priority_queue<ll,vector<ll>,greater<ll>> costs;
    multiset<ll>sale;
    ll sold=0;

    loop(i,0,a)
    {
        ll temp;
        cin>>temp;
        costs.push(temp);
    }

    loop(i,0,b)
    {
        ll temp;
        cin>>temp;
        sale.insert(temp);
    }
    
    while (!costs.empty() && !sale.empty())
    {
        ll applicant = costs.top();
        auto it = sale.lower_bound(applicant - diff);
        
        if (it != sale.end() && *it <= applicant + diff)
        {
            sold++;
            costs.pop();
            sale.erase(it);
        }
        else
        {
            costs.pop();
        }
    }


    cout<<sold;
}

