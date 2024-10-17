#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define all(a) a.rbegin(),a.rend()
int main(){
    ll n,x;cin>>n>>x;
    vector<ll> coin(n);
    vector<ll> dp(x+1,0);
    for(auto &i:coin)cin>>i;
    dp[0]=1;
    sort(all(coin));
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j <=x ; ++j)
        {
            if(coin[i]<=j)
                dp[j]=(dp[j]+dp[j-coin[i]])%MOD;
        }
    }
    cout<<dp[x];
    
}   