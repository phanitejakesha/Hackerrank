#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {

  double param, fractpart, intpart;
    if(v1==v2 && x1<x2){
        return "NO";
    }
    param=(x2-x1)%(v1-v2);
   

    if(x1<x2 && v1<v2)
    {
        return "NO";
    }
    
    if(x1>x2 && v1>v2)
    {
        return "NO";
    }
    if (param==0)
    {
        return "YES";
    }
    if(x1<x2 && v1<v2)
    {
        return "NO";
    }
    return "NO";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}


