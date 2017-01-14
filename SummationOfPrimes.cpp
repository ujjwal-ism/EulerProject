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

long long sum[1000001];

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
     sum[0]=sum[1]=0;
     sum[2]=2;
     int j;
     for(int i=3;i<=1000000;i++){
         if(prime[i]==1)
             sum[i]=i+sum[i-1];
         else
             sum[i]=sum[i-1];         
     }
    
     return ;
 }


int main(){
    int t;
    cin >> t;
    Prime(1000000);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<sum[n]<<endl;
    }
    return 0;
}
