#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,q;cin>>t;
    while(t--){
        cin>>n;
        int a[n][n+2];
        int dp[n][n+2];

        for(int i=0;i<n;i++){
            for(int j=0;j<=n+1;j++){
                dp[i][j] = -1;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                cin>>q;a[i][j] = q;
            }
        }
        dp[0][1] = a[0][1];
        for(int i=1;i<n;i++){
            for(int j=1;j<=i+1;j++)
                dp[i][j] = max(a[i][j]+dp[i-1][j-1],a[i][j]+dp[i-1][j]);
        }
        int max = -1;
        for(int i=1;i<=n;i++){
            if(dp[n-1][i]>max)
                max = dp[n-1][i];
        }
        cout<<max<<endl;
    }

    return 0;
}