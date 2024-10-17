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
	for (ll i = 1; i <= x; ++i)
	{
		for (ll j = 0; j < n ; ++j)
		{
			if(coin[j]<=i)
				dp[i]=(dp[i]+dp[i-coin[j]])%MOD;
		}
	}
	cout<<dp[x];
	
}	