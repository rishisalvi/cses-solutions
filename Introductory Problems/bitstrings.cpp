#include<iostream>
#include<cmath>
using namespace std; 
int main(){
    int n; 
    cin >> n; 
    long long mod = pow(10, 9) + 7; 
    long long answer = 1;
    for (int i = 0; i < n; i++) {
        answer *= 2;
        answer %= mod;
    }
    cout << answer; 
    return 0; 
}