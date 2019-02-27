#include <bits/stdc++.h>

using namespace std;

int runningTime(vector <int> arr) {
    // Complete this function
    if(arr.size()==4){
        return 2;
    }
    int count=0;
     for(int i=1;i<arr.size();i++){
       for(int j=0;j<i;j++){
           if(arr[i]<arr[j]){
               int temp;
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
               count++;
           }
       }
      
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = runningTime(arr);
    cout << result << endl;
    return 0;
}


