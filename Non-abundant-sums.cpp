#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void build(){
        for(int i=12;i<28123;i++){
        map<int,int> m;
        int n=i;
        int temp=i;
        while(n%2==0){
            m[2]+=1;
            n=n/2;
        }
        for(int j=3;j<=sqrt(temp);j=j+2){
            while(n%j==0){
                m[j]+=1;
                n=n/j;
            }
        }
        if(n!=1){
            m[n]=1;
        }
        map<int,int>::iterator it;
        int sum = 1;
        for(it = m.begin();it != m.end();it++){
            sum*= (pow(it->first,it->second+1)-1)/(it->first -1); 
        }    
            sum-=i;
            if(sum>i)
                v.push_back(i);
     }
}
void solution(int n){
    int len = v.size();
    for(int i=0;i<len-1;i++){
        if(n<=v[i]){
            cout<<"NO"<<endl;
            return; 
        }
        for(int j=i;j<len;j++){
            if(v[i]+v[j]==n){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main() {
    int t;cin>>t;
    int n;
    build();
    while(t--){
        cin>>n;
        if(n<24)
            cout<<"NO"<<endl;
        else if(n>28123)
            cout<<"YES"<<endl;
        else
            solution(n);
    }
    
    return 0;
}
