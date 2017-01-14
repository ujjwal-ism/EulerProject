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

long long Sum(int n){
        long long d3,d5,d15,m;
            if(n%3==0)
                        m=(n/3)-1;
                else
                            m=n/3;
                    d3 = (m*(6+(m-1)*3))/2;
                        
                        if(n%5==0)
                                    m=(n/5)-1;
                            else
                                        m=n/5;
                                d5 = (m*(10+(m-1)*5))/2;
                                    
                                    if(n%15==0)
                                                m=(n/15)-1;
                                        else
                                                    m=n/15;
                                            d15 = (m*(30+(m-1)*15))/2;
                                                
                                                return (d3+d5-d15);
                                                    
}

int main(){
        int t;
            cin >> t;
                for(int a0 = 0; a0 < t; a0++){
                            int n;
                                    cin >> n;
                                            if(n<3)
                                                            cout<<"0"<<endl;
                                                    else
                                                                    cout<<Sum(n)<<endl;
                                                        }
                    return 0;
}
