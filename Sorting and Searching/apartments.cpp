#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n, m, k; 
    cin >> n >> m >> k; 
    vector<int> people(n); 
    for (int i = 0; i < n; i++)
        cin >> people[i];
    vector<int> aparts(m);
    for (int j = 0; j < m; j++)
        cin >> aparts[j]; 
    std::sort(people.begin(), people.end());
    std::sort(aparts.begin(), aparts.end());
    int counter = 0;
    int i = 0, j = 0; 
    while (i < n && j < m) {
		if (abs(people[i] - aparts[j]) <= k) {
			i++;
			j++;
			counter++;
		} 
        else{
			if (people[i] - aparts[j] > k)
                j++; 
			else
				i++;
		}
	}
    cout << counter; 
}