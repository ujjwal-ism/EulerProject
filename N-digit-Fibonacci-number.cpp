#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int numberOfDigits(ll n)
{
    if (n == 1)
        return 1;
 
    long double d = (n * log10(1.6180339887498948)) -
                    ((log10(5)) / 2);
 
    return (int)ceil(d);
}

int main() {
    map<int,ll> m;
    int nd=0,q;
    ll t=1;
    while(1){
        q = numberOfDigits(t);
        if(q == 5000){
            m[q] = t;break;
        }
        if(q>nd){
            nd = q;
            m[q] = t;
        }
        t++;
    }
    int u,v;cin>>u;
    while(u--){
        cin>>v;
        cout<<m[v]<<"\n";
    }
    
    return 0;
}