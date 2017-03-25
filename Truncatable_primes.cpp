#include <bits/stdc++.h>
using namespace std;
typedef long ll;

bool prime(int t){
    if(t<2)
        return false;
    for(int i=2;i<=(int)sqrt(t);i++)
        if(t%i==0)
            return false;
    return true;  
}

bool t_prime(int t){
    string s,a;int l,n;
    if(prime(t)){
        s = to_string(t);
        l = s.length();
        for(int i=1;i<l;i++){
            n = stoi(s.substr(i,l-i));
            if(!prime(n))
                return false;
        }
        reverse(s.begin(),s.end());
        for(int i=1;i<l;i++){
            a = s.substr(i,l-i);
            reverse(a.begin(),a.end());
            n = stoi(a);
            if(!prime(n))
                return false;
        }
        return true;
    }
    return false;
}

int main() {
    int n;cin>>n;
    ll sum = 0;
    for(int i=22;i<n;i++){
        if(t_prime(i))
            sum+=i;
    }
    cout<<sum;
    return 0;
}