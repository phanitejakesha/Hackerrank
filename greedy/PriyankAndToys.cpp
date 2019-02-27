#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n;
    cin>>n;
    vector<int> w(n);
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    
    sort(w.begin(),w.end());
    int temp=0;
    int count=0;
    for(int i=0;i<n;i=i+temp+1){
        if(i==(n-1)){
            count=count+1;
            break;
        }
        temp=0;
        for(int j=i+1;j<n;j++){
            if(w[j]>=w[i] && w[j]<=w[i]+4){
                temp+=1;
                if(j==(n-1)){
                    count=count+1;
                    break;
                }
            }
            
            else{
            count=count+1;
                break;
            }
        }
       
    }
    
    cout<<count;
    
    return 0;
}


