#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,len;cin>>n;
    string s;
    int sum=0;
    vector<int> v;
        for(int i= 2;i<555555;i++){
            s = to_string(i);
            len = s.length();
            sum=0;
            for(int j=0;j<len;j++){
                sum+=pow(s[j]-'0',n);
            }
            if(sum==i)
                v.push_back(i);
        }
    
    sum=0;
    for(int i=0;i<v.size();i++)
        sum+=v[i];
    cout<<sum;
    
    return 0;
}
