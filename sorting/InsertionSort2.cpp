#include <bits/stdc++.h>

using namespace std;

void insertionSort2(int n, vector <int> arr) {
    // Complete this function
    for(int i=1;i<arr.size();i++){
       for(int j=0;j<i;j++){
           if(arr[i]<arr[j]){
               int temp;
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
        for(int k=0;k<arr.size();k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort2(n, arr);
    return 0;
}


