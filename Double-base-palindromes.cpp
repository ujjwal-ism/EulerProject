#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n,k,q,r;cin>>n>>k;
    string s,t,u,v;
    ll sum = 0;
    for(int i=1;i<=n;i++){
        s = to_string(i);
        t = s;
        reverse(s.begin(),s.end());
        if(s.compare(t)==0){
            q = i;u = "";
            while(q>0){
               r = q%k;s = to_string(r);
               u.append(s);
                q/=k;
            }
            v = u;
            reverse(u.begin(),u.end());
            if(u.compare(v)==0)
                sum+=i;
        }
    }
    cout<<sum;
    
    return 0;
}