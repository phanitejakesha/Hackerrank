#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
      sort(calories.begin(),calories.end());
         long sum=0;
    int count=0;
    for(int i=calories.size();i>0;i--){
        sum=sum+(calories[i-1]*pow(2,count));
         //cout<<sum<<endl;
        count+=1;
        
    }
   cout<<sum;
    return 0;
}


