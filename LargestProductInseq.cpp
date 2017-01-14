#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int maxProduct(string num,int n,int k){
    vector<int> v;
    int p,t;
    for(int i=k-1;i<n;i++){
        p=1;
        for(int j=i-k+1;j<=i;j++){
            t=num[j]-'0';
            p=p*t;
        }
        v.push_back(p);
    }
    return *max_element(v.begin(),v.end());
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        cout<<maxProduct(num,n,k)<<endl;
    }
    return 0;
}
