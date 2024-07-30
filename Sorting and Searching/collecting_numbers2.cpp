#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;
    vector<int> values(n+1);
    vector<int> indices(n+1); 
    for (int i = 1; i <= n; i++){
        int x; 
        cin >> x; 
        indices[x] = i; 
        values[i] = x; 
    }

    int passes = 1, step =1;
    for (int i = 1; i <= n; i++) {
		if (step > indices[i]) 
		    passes++;
		step = indices[i];
    }


    for (int i = 0; i < m; i++) {
        set<pair<int, int>> adjacent;
        int a, b;
        cin >> a >> b;
        int r = values[a], l = values[b];

		swap(values[a], values[b]);
		if (indices[r-1] <= indices[r] && indices[r-1] > b) 
            passes++;
		if (indices[r-1] > indices[r] && indices[r-1] <= b) 
            passes--;
		if (indices[r] <= indices[r+1] && b > indices[r+1]) 
            passes++;
		if (indices[r] > indices[r+1] && b <= indices[r+1]) 
            passes--;		
		indices[r] = b;

		if (indices[l-1] <= indices[l] && indices[l-1] > a) 
            passes++;
		if (indices[l-1] > indices[l] && indices[l-1] <= a) 
            passes--;
		if (indices[l] <= indices[l+1] && a > indices[l+1]) 
            passes++;
		if (indices[l] > indices[l+1] && a <= indices[l+1]) 
            passes--;	
		indices[l] = a;

		cout << passes << "\n";
    }
}