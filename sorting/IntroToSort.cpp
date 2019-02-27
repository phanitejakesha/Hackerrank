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
    int n;
    int k;
    int ans=0;
    cin >> n >> k;
    vector<int> ar(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> ar[height_i];
        if(n==ar[height_i]){
            ans=height_i;
            break;
        }
    }
    cout<< ans;
    return 0;
}



