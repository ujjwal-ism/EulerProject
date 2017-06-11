#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;cin>>n;
    ll a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    ll dp[n][n];
    dp[0][0] = a[0][0];
    for(int i=1;i<n;i++){
        dp[0][i] = a[0][i] + dp[0][i-1];
        dp[i][0] = a[i][0] + dp[i-1][0];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            dp[i][j] = min(a[i][j]+dp[i-1][j],a[i][j]+dp[i][j-1]);
        }
    }
    cout<<dp[n-1][n-1];
    
    return 0;
}
