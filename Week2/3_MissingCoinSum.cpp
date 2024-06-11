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

    int n;
    cin >> n;
    vector<ll> list(n);

    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    sort(list.begin(), list.end());

    ll sum = 1;

    for (const ll &coin : list) {
        if (coin > sum) {
            break;
        }
        sum += coin;
    }

    cout << sum << endl;
   
}
