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

int prime[12]={2,3,5,7,11,13,17,19,23,29,31,37};

long long lcm(int n){
    map<int,int> m;
    int i=0;
    int temp=prime[0];
    while(i<12 && prime[i]<=n){
        temp=temp*prime[i];
        if(temp<=n){
            m[prime[i]]=temp;
        }
        else{
           m[prime[i]]=temp/prime[i];
            i++;
            if(i<12){
            temp=prime[i];
                continue;}
            else
                break;
        }
    }
    long long LCM=1;
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
        LCM=LCM*(it->second);
    }
    return LCM;
    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        if(n<=2)
            cout<<n<<endl;
        else
        cout<<lcm(n)<<endl;
    }
    return 0;
}