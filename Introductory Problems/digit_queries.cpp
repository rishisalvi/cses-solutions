#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(ll k) {
    ll digits = 1;
    ll range = 9;

    while (k > digits * range) {
        k -= digits * range;
        digits++;
        range *= 10;
    }

    ll numberIndex = (k - 1) / digits;
    ll digitIndex = (k - 1) % digits;

    ll number = pow(10, digits - 1) + numberIndex;
    string numberStr = to_string(number);

    return numberStr[digitIndex] - '0';
}

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        ll k;
        cin >> k;
        cout << solve(k) << endl;
    }
    return 0;
}
