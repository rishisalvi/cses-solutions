#include<iostream>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    for (int i = 0; i < t; i++){
        int a, b; 
        cin >> a >> b; 
        if ((a + b) % 3 == 0){
            if (max(a, b) <= 2 * min(a, b))
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}