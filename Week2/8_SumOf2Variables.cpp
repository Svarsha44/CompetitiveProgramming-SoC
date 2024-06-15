#include<bits/stdc++.h>
using namespace std;

typedef int64_t ll;
#define loop(i,a,b) for (ll i = a; i < b; i++)


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n,tot;
    cin>>n>>tot;

    multimap<ll,ll> map;

    loop(i,0,n)
    {
        ll temp;
        cin>>temp;
        map.insert({temp,i});
    }

    bool found=false;

    // for(auto set: map)
    // {
    //     cout<<set.first<<""<<set.second<<endl;
    // }

    for( auto set: map)
    {   
        ll num=set.first;
        ll index=set.second;
        ll diff=tot-set.first;
        if(diff==set.first && map.find(diff)->second==set.second) map.erase(map.find(diff));
        if(map.find(diff)!=map.end() && map.find(diff)->second!=set.second) {cout<<set.second+1<<" "<<map.find(diff)->second+1;
       found=true;
       break;
       }
       if(!found && diff==set.first) map.insert({num,index});
    
    }
    
    if(!found) cout<<"IMPOSSIBLE"<<endl;

}
