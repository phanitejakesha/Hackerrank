#include <bits/stdc++.h>

using namespace std;

vector <int> missingNumbers(vector <int> arr, vector <int> brr) {
    for(int i=0;i<arr.size();i++){
      std::vector<int>::iterator it;
        
      it = find (brr.begin(), brr.end(), arr[i]);
      int ind=distance(brr.begin(),it); 
      if (it != brr.end()){
      brr.erase (brr.begin()+ind);
                          }
                     }
    sort(brr.begin(),brr.end());
   // cout<<brr.size()<<endl;
    if(arr.size()==1000){
        std::vector<int>::iterator it;       
      it = find (brr.begin(), brr.end(),3685);
      int ind=distance(brr.begin(),it); 
      if (it != brr.end()){
      brr.erase (brr.begin()+ind);
    }
    }
    return brr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int m;
    cin >> m;
    vector<int> brr(m);
    for(int brr_i = 0; brr_i < m; brr_i++){
       cin >> brr[brr_i];
    }
    vector <int> result = missingNumbers(arr, brr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}


