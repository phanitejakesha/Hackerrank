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
    int q;
    cin >> q;
    int a0;
    for( a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
         if(abs(z-y)>abs(z-x) )
         {
                         cout<<"Cat A"<<endl;
         }
        if(abs(z-y)<abs(z-x) )
         {
                         cout<<"Cat B"<<endl;
         }
        if(abs(z-y)==abs(z-x)){
            cout<<"Mouse C"<<endl;
        }
       
    }
    return 0;
}


