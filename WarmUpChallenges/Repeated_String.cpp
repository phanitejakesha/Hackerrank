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
    string s;
    cin >> s;
    long n;
    int count=0;
    cin >> n;
    for(int i;i<s.length();i++){
        if(s[i]=='a'){
            count+=1;
        }
    }
    long x,ans;
    x=n/s.length();
    ans=n%s.length();
    int  rem=0;
       for(int i;i<ans;i++){
        if(s[i]=='a'){
            rem+=1;
        }
    }
    cout<<count*x+rem;
    return 0;
}


