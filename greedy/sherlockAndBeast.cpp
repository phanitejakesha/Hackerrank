#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,count=0;
        int t=0,f=0;
        cin >> n;       
             f=n;
             for(int i =0;i<=n;i++){      
                 if(f%3==0 && t%5==0){
                     for(int j=0;j<f;j++){
                       cout<<"5";
                                         }
                     for(int j=0;j<t;j++){
                       cout<<"3";
                                        }
                    cout<<endl;                 
                     count+=1;
                        break;
                                    }                                 
                   f=f-1;
                   t=t+1;        
         }
if(count==0){
    cout<<"-1"<<endl;
}    }
    return 0;
}


