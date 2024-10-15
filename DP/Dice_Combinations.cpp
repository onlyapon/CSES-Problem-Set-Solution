#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define all(a) a.begin(),a.end()
int main(){
	long long n;cin>>n;
	long long a[n+1]={};
	a[0]=1;
	for (int j = 1; j <= n; ++j)
	{
		for (int i = 1; i <=6 and i<=j; ++i)
		{
			a[j]=(a[j]+a[j-i])%MOD;
			
		}
	}
	cout<<a[n];
}