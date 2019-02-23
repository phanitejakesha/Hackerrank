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
    string S;
    cin >> S;
    int count=0;
    for(int i=0;i<S.length();i=i+3){
        if(int(S[i])!=83 ){
            count+=1;
        }
        if( int(S[i+1])!=79 ){
             count+=1;
        }
        if( int(S[i+2])!=83 ){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}


