#include <bits/stdc++.h>
using namespace std;

vector<string> generateGrayCode(int n) {
    vector<string> grayCodes;
    int totalCodes = 1 << n;

    for (int i = 0; i < totalCodes; i++) {
        int gray = i ^ (i >> 1);
        string grayCode = bitset<32>(gray).to_string().substr(32 - n);
        grayCodes.push_back(grayCode);
    }

    return grayCodes;
}

int main() {
    int n;
    cin >> n;

    vector<string> grayCodes = generateGrayCode(n);

    for (string code : grayCodes) {
        cout << code << endl;
    }

    return 0;
}
