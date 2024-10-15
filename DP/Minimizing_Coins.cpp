#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007
#define all(a) a.begin(),a.end()
int main(){
	long long n;cin>>n;
	long long x;cin>>x;
	long long cnt=0;
	vector<long long> v(n);
	vector<long long> d(x+1,INF);
	for(auto &i:v)cin>>i;
	d[0]=0;
	sort(v.begin(),v.end());
	for (int i=1;i<=x;i++)
	{
		for (int j = 0; j < n and v[j]<=i; ++j)
		{
			d[i]=min(d[i-v[j]]+1,d[i]);
		}
	}
	cout << (d[x] >= INF ? -1 : d[x]) << endl;
 
}