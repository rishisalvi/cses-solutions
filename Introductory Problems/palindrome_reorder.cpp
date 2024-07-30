#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    int len = input.length();
    vector<int> letters(26, 0);  

    for (int i = 0; i < len; i++) {
        letters[input[i] - 'A']++;
    }

    int oddCount = 0;
    char oddChar;
    for (int i = 0; i < 26; i++) {
        if (letters[i] % 2 == 1) {
            oddCount++;
            oddChar = (char)(i + 'A');
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string half = "";
    for (int i = 0; i < 26; i++) {
        half += string(letters[i] / 2, (char)(i + 'A'));
    }

    string secondHalf = half;
    reverse(secondHalf.begin(), secondHalf.end());

    if (oddCount == 1) {
        cout << half + oddChar + secondHalf;
    } else {
        cout << half + secondHalf;
    }

    return 0;
}
