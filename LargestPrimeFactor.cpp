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

long Largest_PF(long n){
    vector<long> factors;
    long temp = n;
    while(n%2==0){
        factors.push_back(2);
        n=n/2;
    }
    for(long i=3;i<=sqrt(temp);i=i+2){
        while(n%i==0){
            factors.push_back(i);
            n=n/i;
        }
    }
    if(n!=1)
        return n;
    return factors[factors.size()-1];
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout<<Largest_PF(n)<<endl;
    }
    return 0;
}
