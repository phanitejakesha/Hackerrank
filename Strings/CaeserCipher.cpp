#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    int x;
    for(int i=0;i<s.length();i++){
        if(int(s[i])>=97 && int(s[i])<=122){           
            if(int(s[i])+k-96>=26){
                 x=(int(s[i])+k-96);
                 x=x%26;
                if(x+96==96){
                    cout<<char(122);
                    continue;
                }
                cout<<char(x+96);
                continue;
            }           
            cout<<char(int(s[i]+k));
        }
        else if(int(s[i])>=65 && int(s[i])<=90){
            
                       if(int(s[i])+k-64>=26){
                 x=(int(s[i])+k-64);
                 x=x%26;
                               if(x+64==64){
                    cout<<char(90);
                    continue;
                }
                cout<<char(x+64);
                continue;
                       }                                
            cout<<char(int(s[i]+k));
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}



