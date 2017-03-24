#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int fact(int t){
    int res = 1;
    for(int i=1;i<=t;i++)
        res*=i;
    return res;
}

bool curious(int n){
    string s = to_string(n);
    int l = s.length(); ll sum = 0;
    int t;
    for(int i=0;i<l;i++){
        t = s[i]-'0';
        sum += fact(t);
    }
    if(sum%n==0)
        return true;
    else
        return false;
}

int main() {
    int n;cin>>n;
    ll sum = 0;
    for(int i=10;i<=n;i++){
        if(curious(i))
            sum+=i;
    }
    cout<<sum;
    
    return 0;
}
