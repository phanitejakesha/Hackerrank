#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,count;
    cin>>x;
    string n;
    cin>>n;
    vector <int> arr(x);
    //cout<<n.length();
    int m=0,ans=0;
    for(int i=0;i<n.length();i++){
       if (int(n[i])==85){
           m=m+1;
       }
       else{
            m=m-1;
        }
       arr[i]=m;
    }
    for(int i=0;i<x;i++){
        if(arr[i]<0 && arr[i+1]==0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}


