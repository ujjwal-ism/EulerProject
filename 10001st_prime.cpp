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

vector<int> p;
 void Prime(int n){
     int prime[n+1];
     fill_n(prime,n+1,1);
     prime[0]=0;
     prime[1]=0;
     for(int i=2;i<=sqrt(n);i++){
         if(prime[i]==1){
             int k=2;
             while((k*i)<=n){
                 prime[k*i]=0;
                 k++;
             }
         }
     }
     for(int i=2;i<=n;i++){
         if(prime[i]==1)
             p.push_back(i);
     }
     return;
 }

int main(){
    int t;
    cin >> t;
    Prime(110000);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<p[n-1]<<endl;
    }
    return 0;
}
