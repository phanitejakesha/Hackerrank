#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    vector <int> g;
    for(int i=0;i<grades.size();i++){
        int old_g=grades[i];
     int g=5-grades[i]%5;
        if(g<3)
        {
            grades[i]=grades[i]+g;
        }
        if(grades[i]<38)
        {
            grades[i]=old_g;
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}


