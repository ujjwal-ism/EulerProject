#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i=2;i<=(int)sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int p(int a,int b){
    int r = 0;
    for(int i=0;i<b;i++){
        if(i*i+a*i+b<2)
            break;
        if(prime(i*i+a*i+b))
            r++;
        else
            break;
    }
    return r;
}

int main() {
    int n;cin>>n;
    int a,b,t; int max = -1;
    for(int i=(-1)*n;i<=n;i++){
        for(int j=1;j<=n;j++){
            t = p(i,j);
            if(t>max){
                max = t;
                a = i;b = j;
            }
        }
    }
    cout<<a<<" "<<b;
    
    return 0;
}
