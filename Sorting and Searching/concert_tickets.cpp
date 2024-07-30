#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll out = pow(10, 9) + 1; 
int main(){
    int n, m; 
    cin >> n >> m; 
    multiset<int> prices;
    for (int i = 0; i < n; i++){
        int temp; 
        cin >> temp;
        prices.insert(temp);
    }
    for (int i = 0; i < m; i++) {
        int t; 
		cin >> t;
		auto it = prices.upper_bound(t);
		if (it == prices.begin()) {
			cout << -1 << "\n";
		} else {
			cout << *(--it) << "\n";
			prices.erase(it);
		}
	}
}