#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> weights(n);
    for (int i = 0; i < n; i++)
        cin >> weights[i];
    
    sort(weights.begin(), weights.end());

    ll counter = 0;
    int i = 0, j = n - 1;

    while (i <= j) {
        if (weights[i] + weights[j] <= x) {
            i++;
        }
        j--;
        counter++;
    }

    cout << counter << endl;
    return 0;
}
