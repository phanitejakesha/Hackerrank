#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }  
    cout<<n<<endl;
    int count=0;
    x:
    int min=*min_element(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        arr[i]=arr[i]-min;
        if(arr[i]==0){
         arr.erase (arr.begin()+i);
            i=i-1;
            count=count+1;
        }
    }
    if((n-count)==0){
        goto end;
    }
    cout<<n-count<<endl;
        if(count!=n){
            goto x;
        }
   end: 
    return 0;
}


