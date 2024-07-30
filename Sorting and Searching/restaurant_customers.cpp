#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n; 
    cin >> n; 
    map<int, int> cust; 
    for (int i = 0; i < n; i++){
        int a, b; 
        cin >> a >> b; 
        cust[a] = 1; 
        cust[b] = -1; 
    }

    map<int, int>::iterator it; 
    int curr = 0, maxVal = 0; 
    for (it = cust.begin(); it != cust.end(); it++){
        curr += it->second;
        if (curr > maxVal)
            maxVal = curr; 
    }
    cout << maxVal; 
}