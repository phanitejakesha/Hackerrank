#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int arr_length,k;
        cin>>arr_length;
        cin>>k;
        vector <int> arr1(arr_length);
        vector <int> arr2(arr_length);
            for (int j=0;j<arr_length;j++){
                cin>>arr1[j];
            }
            for (int k=0;k<arr_length;k++){
                cin>>arr2[k];
            }

        
        
        for (int m=0;m<arr_length;m++){
            arr2[m]=k-arr2[m];
        }
        
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int x=arr1.size();
        
            
        
       for(int i=0;i<arr1.size();i++){
           for(int j=0;j<arr2.size();j++){
             //  cout<<arr1[i]<<" "<<arr2[j]<<" "<<endl;
               if(arr1[i]>=arr2[j]){
                   arr2.erase(arr2.begin()+j);
                   x=x-1;
                   break;
               }
           }
       }
       // cout<<x;
        if(x==0){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


