#include <bits/stdc++.h>

using namespace std;

int minimumAbsoluteDifference(int n, vector <int> arr) {

    int temp=100000;
    
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(temp>abs(arr[i]-arr[i+1])){
           temp=abs(arr[i]-arr[i+1]);
        }   
    }
    
  return temp;  
} 


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = minimumAbsoluteDifference(n, arr);
    cout << result << endl;
    return 0;
}


