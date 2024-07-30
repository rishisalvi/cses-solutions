#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n; 
    cin >> n; 
    multiset<int> towers;
    for (int i = 0; i < n; i++){
        int k; 
        cin >> k; 
        auto it = towers.upper_bound(k);
        if (it == towers.end()){
            towers.insert(k);
        }
        else{
            towers.erase(it);
            towers.insert(k);
        }
    }
    cout << towers.size();
}