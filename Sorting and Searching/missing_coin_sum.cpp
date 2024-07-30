#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin >> n; 
    vector<ll> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i]; 
    sort(coins.begin(), coins.end());
    ll smallest = 1; 
    for (int i = 0; i < n && coins[i] <= smallest; i++)
        smallest += coins[i]; 
    cout << smallest; 
}