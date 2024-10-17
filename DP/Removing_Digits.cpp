#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1000000007
#define all(a) a.begin(),a.end()


int main(){
	ll n;cin>>n;
	vector<ll> dp(n+1,INF);
	dp[0]=0;
	for (int i = 0; i < n+1; ++i)
	{
		for(auto j:to_string(i)) dp[i]=min(dp[i],dp[i-(j-'0')]+1);
	}
	cout<<dp[n];
}