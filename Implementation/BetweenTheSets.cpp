#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    int ans=0,loop=0;
    for(int i=a[a.size()-1];i<=b[0];i++){
        //cout<<i<<endl;
        int count_a=0,count_b=0;
        
        for(int j=0;j<a.size();j++){
            if(i%a[j]==0){
                count_a++;
            }
        }
        for(int k=0;k<b.size();k++){
             if(b[k]%i==0){
                count_b++;
            }
        }
   if(count_a==a.size() && count_b==b.size()){
       ans++;
   } 
    }
    return ans;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}


