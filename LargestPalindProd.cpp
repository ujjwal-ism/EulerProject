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

bool isPalindrome(int n){
    string s = to_string(n);
    if(s==string(s.rbegin(),s.rend()))
        return true;
    return false;
}

vector<int> v;
void build(){
    for(int i=101;i<999;i++){
        for(int j=i+1;j<=999;j++){
            if(isPalindrome(i*j)) 
                v.push_back(i*j);
        }
    }
    return;
}

int main(){
    int t;
    cin >> t;
    build();
    sort(v.begin(),v.end());
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), n);
     // if (v[low - v.begin()] == val)
           cout<<v[low - v.begin()-1]<<endl;
        
    }
    return 0;
}
