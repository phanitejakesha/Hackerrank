#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    // Complete this function  
    start:
    int count=0;
    
 int siz=s.length();
    for(int i=0;i<siz-1;i++){
        if(s[i]==s[i+1]){
             s.erase(s.begin()+1+i);
             s.erase (s.begin()+i);
             siz=siz-2;
             i=i-1;
             count=1;
        }
    }
    if(count==1){
        goto start;
    }
    if(s.size()==0){
        return "Empty String";
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}


