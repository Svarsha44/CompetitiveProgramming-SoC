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

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;

    vector<vector<char>> vec(n,vector<char>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>vec[i][j];
        }
    }

    if(vec[0][0]=='*' || vec[n-1][n-1]=='*') {cout<<0;
    return 0;}

    vector<vector<int>> paths(n,vector<int>(n,0));
	paths[0][0]=1;
	for(int i=1; i<n; i++) if(vec[i][0]!='*')paths[i][0]=paths[i-1][0];
	for(int i=1; i<n; i++) if(vec[0][i]!='*')paths[0][i]=paths[0][i-1];

	for(int i=1; i<n; i++)
	{
		for(int j=1; j<n; j++)
		{
			if(vec[i][j]!='*')paths[i][j]=(paths[i][j-1]+paths[i-1][j])%mod;
            
		}
	}

	cout<<paths[n-1][n-1];
}
