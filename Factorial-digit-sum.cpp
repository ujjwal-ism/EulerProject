#include <bits/stdc++.h>
using namespace std;

int fact(int x,vector<int> &v,int size){
    int carry = 0,p;
    for(int i=0;i<size;i++){
        p = v[i]*x+carry;
        v[i] = p%10;
        carry=p/10;
    }
    while(carry){
        v[size++] = carry%10;
        carry/=10;
    }
    return size;
}

int sum(int n){
    vector<int> v(3000);
    v[0] = 1;
    int size = 1;
    for(int i=2;i<=n;i++)
        size = fact(i,v,size);
    int s = 0;
    for(int i=0;i<size;i++)
        s+=v[i];
    
    return s;
}

int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        cout<<sum(n)<<endl;
    }
    
    return 0;
}
