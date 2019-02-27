#include <bits/stdc++.h>

using namespace std;

void insertionSort1(int n, vector <int> arr) {
    // Complete this function
    int unsort=arr[n-1]; 
    for(int i=n-2;i>=0;i--){
        if(arr[i]>unsort){
            arr[i+1]=arr[i];
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            if(i==0){
                arr[0]=unsort;
                for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            }
            continue;
        }
        else{
            arr[i+1]=unsort;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }
    }
    end:{}
    
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort1(n, arr);
    return 0;
}


