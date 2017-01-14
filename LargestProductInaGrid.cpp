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


int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
       for(int grid_j = 0;grid_j < 20;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    
    vector<int> v;
    //Row...........
    int i,j,k,p;
    for(i=0;i<20;i++){
        for(j=3;j<=19;j++){
            p=1;
            for(k=j-3;k<=j;k++){
                p*=grid[i][k];
            }
            v.push_back(p);
        }
    }
    //Column........
    for(i=0;i<20;i++){
        for(j=3;j<=19;j++){
            p=1;
            for(k=j-3;k<=j;k++){
                p*=grid[k][i];
            }
            v.push_back(p);
        }
    }
    //Principal diagonal.....
    
    for(i=0;i<=16;i++){
        for(j=0;j<=16;j++){
            p=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
            v.push_back(p);
        }
    }
    //Secondary diagonal....
    
    for(i=0;i<=16;i++){
        for(j=3;j<20;j++){
            p=grid[i][j]*grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3];
            v.push_back(p);
        }
    }
    cout<<*max_element(v.begin(),v.end());
    return 0;
}
