#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll recurse(int index, int* apples, ll sum1, ll sum2, int end){
    if (index == end)
        return abs(sum1 - sum2); 
    ll pile1 = recurse(index + 1, apples, sum1 + apples[index], sum2, end); 
    ll pile2 = recurse(index + 1, apples, sum1, sum2 + apples[index], end); 
    return min(pile1, pile2);
}

int main() {
    int n; 
    cin >> n; 
    int apples[n]; 
    for (int i = 0; i < n; i++)
        cin >> apples[i]; 
    cout << recurse(0, apples, 0, 0, n);
    return 0; 
}
