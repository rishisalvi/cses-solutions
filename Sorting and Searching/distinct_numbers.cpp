#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n; 
    cin >> n; 
    vector<int> num(n);
    for (int i = 0; i < n; i++)
        cin >> num[i];
    std::sort(num.begin(), num.end());
    int count = 1;
    for (int i = 1; i < n; i++)
        if (num[i - 1] != num[i])
            count++; 
    cout << count; 
}