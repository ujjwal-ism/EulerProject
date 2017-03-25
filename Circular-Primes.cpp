#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i=2;i<=(int)sqrt(n);i++)
        if(n%i==0)
        return false;
    return true;     
}

bool cprime(int n){
    string s = to_string(n);
    int t;
    int l = s.length();
    for(int i=0;i<l;i++){
        t = stoi(s.substr(i,l));
        if(!prime(t))
            return false;
        s += s[i];
    }
    return true;
    
}

int main() {
    int n;cin>>n;
    int sum = 0;
    for(int i=2;i<n;i++)
        if(cprime(i))
            sum+=i;
    cout<<sum;
    
    return 0;
}