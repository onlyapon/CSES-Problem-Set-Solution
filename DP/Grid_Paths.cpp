#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    long long int mod = 1e9+7;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
  
    long long dp[n+1][n+1];
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <=n; j++) {
            dp[i][j]=0;
        }
    }
    if(s[0][0]!='*')
    	dp[0][0] = 1;
    else 
    	dp[0][0]=0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] != '*') { 
                if (i > 0) dp[i][j] += dp[i-1][j]%mod ;
                if (j > 0) dp[i][j] += dp[i][j-1]%mod;
            }else
            {
                dp[i][j] = 0;
            }
        }
    }
    cout << dp[n-1][n-1]%mod << endl;
    
    return 0;
}