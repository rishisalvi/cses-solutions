#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n; 
    cin >> n; 
    vector<ll> sticks(n);
    for (int i = 0; i < n; i++)
        cin >> sticks[i];
    sort(sticks.begin(), sticks.end()); 
    ll median = sticks[n/2]; 
    ll cost = 0; 
    for (int i = 0; i < n; i++)
        cost += abs(sticks[i] - median); 
    cout << cost; 
}