#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;cin>>n;
    vector<string> s;
    string temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        s.push_back(temp);
    }
    sort(s.begin(),s.end());
    int q;cin>>q;
    map<char,int> m;
    char ch='A';
    for(int i=1;i<27;i++){
        m[ch]=i;
        ch++;
    }
    
    while(q--){
        string st;cin>>st;
        long long sum=0;
        int len = st.length();
        for(int i=0;i<len;i++){
            sum+=m[st[i]];
        }
        long long index;
        for(int i=0;i<n;i++){
            if(st.compare(s[i]) == 0){
                index = i+1;
                break;
            }
        }
        cout<<sum*index<<endl;
    }
    
    return 0;
}
