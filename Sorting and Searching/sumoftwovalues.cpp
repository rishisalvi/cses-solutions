#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n, x; 
    cin >> n >> x; 
    vector<pair<int, int>> values; 
    for (int i = 0; i < n; i++){
        int a; 
        cin >> a; 
        values.push_back({a, i + 1});
    }
    sort(values.begin(), values.end());
    int l = 0;
	int r = n - 1;
	while (l < r) {
		if (values[l].first + values[r].first > x)
			r--;
		else if (values[l].first + values[r].first < x)
			l++;
		else{
			cout << values[l].second << " " << values[r].second << endl;
			return 0;
		}
	}

	cout << "IMPOSSIBLE" << endl;
}