#include <bits/stdc++.h>
using namespace std;

class TowerOfHanoi {
public:
    int steps = 0;

    void towerOfHanoi(int n, int start, int end, int other) {
        if (n == 0)
            return;
        towerOfHanoi(n - 1, start, other, end);
        cout << start << " " << end << endl;
        towerOfHanoi(n - 1, other, end, start);
    }

    void countSteps(int n, int start, int end, int other) {
        if (n == 0)
            return;
        steps++;
        countSteps(n - 1, start, other, end);
        countSteps(n - 1, other, end, start);
    }
};

int main() {
    int n;
    cin >> n;

    TowerOfHanoi toh;
    toh.countSteps(n, 1, 3, 2);
    cout << toh.steps << endl;
    toh.towerOfHanoi(n, 1, 3, 2);

    return 0;
}
