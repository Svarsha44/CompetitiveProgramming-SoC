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

ll editdist(string &a, string &b)
{
    ll m=a.size();
    ll n=b.size();

    vvi dp(m+1,vi(n+1,0));
    loop(i,0,m+1) dp[i][0]=i;
    loop(i,0,n+1) dp[0][i]=i;

    loop(i,1,m+1)
    {
        loop(j,1,n+1){

            if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
        }
    }

    return dp[m][n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    cin>>a>>b;

    cout<<editdist(a,b);

}
