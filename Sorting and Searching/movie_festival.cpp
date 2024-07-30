#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n; 
    cin >> n; 
    vector<pair<int, int>> events; 
    for (int i = 0; i < n; i++){
        int a, b; 
        cin >> a >> b; 
        events.push_back({b, a});
    }
    
    sort(events.begin(), events.end());
    
    int time = 0, count = 0; 
    for (auto event : events){
        if (event.second >= time){ 
            count++; 
            time = event.first; 
        }
    }
    cout << count; 
    return 0;
}
