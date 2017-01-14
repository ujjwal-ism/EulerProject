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

long abc(int n){
    vector<int> v;
    long b,c;
    for(long a=1;a<=(n/2);a++){
        b=(n*(n-2*a))/(2*(n-a));
        c=n-(a+b);
        if((a*a+b*b)==(c*c) && b>0 && c>0)
            v.push_back(a*b*c);
    }
    if(v.empty())
        return -1;
    return *max_element(v.begin(),v.end());
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<abc(n)<<endl;
    }
    return 0;
}
