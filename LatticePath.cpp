#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define mod 1000000007
using namespace std;
typedef long long LL;

LL fact(int temp){
    LL res=1;
    while(temp>0){
        res=(res*temp)%mod;
        temp--;
    }
    return res;
}
LL pow(LL a, LL b, LL MOD) {
LL x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}
LL Solution(int n,int m){
    LL num = fact(n+m);
    LL d1 = fact(n);
    LL d2 = fact(m);
    LL deno = (d1*d2)%mod;
    
    LL temp = pow(deno,mod-2,mod);
    LL result = (num*temp)%mod;
    
    return result;
}

int main() {
    int t;cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        cout<<Solution(n,m)<<endl;
    }
    
    
    return 0;
}