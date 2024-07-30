#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n; 
    cin >> n; 
    map<int, int> ints; 
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        ints[x] = i + 1; 
    }

    map<int, int>::iterator it; 
    int step = 0, passes = 1; 
    for (it = ints.begin(); it != ints.end(); it++){
        if (step > it->second)
            passes++; 
        step = it->second;
    }
    cout << passes; 
}