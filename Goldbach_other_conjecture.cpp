#include <bits/stdc++.h>
#define n 500000
using namespace std;

vector<int> v;
void Sieve()
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p<=n; p++)
    {
        if (prime[p] == true)
        {
            v.push_back(p);
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);cin.tie(NULL);

    Sieve();
    int l = v.size();
    int t;cin>>t;
    int m,i,count,temp,t1;
    while(t--){
        cin>>m;
        count = 0;
        i = 1;
        while(i < l && v[i] < m){
            t1 = (m - v[i])/2;
            temp = sqrt(t1);
            if(temp*temp == t1)
                count++;
            i++;
        }
        cout<<count<<"\n";
    }
    
    return 0;
}