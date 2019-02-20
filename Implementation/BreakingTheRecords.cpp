#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    vector <int> minmax(2);
    int max=s[0];
    int min=s[0];
    minmax[0]=0;
    minmax[1]=0;
        
    for(int i=1;i<s.size();i++)
    {
        if(max<s[i]){
            max=s[i];
            minmax[0]+=1;
        }
        if(min>s[i]){
            min=s[i];
            minmax[1]+=1;
        }
    }
    return minmax;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}



