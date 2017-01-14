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

unsigned long long Sum(long n){
    long e0=0,e1=2;
    long temp;
    long long sum=2;
    while(1){
        temp = 4*e1+e0;
        if(temp>n)
            break;
        sum+=temp;
        e0=e1;
        e1=temp;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout<<Sum(n)<<endl;
    }
    return 0;
}
