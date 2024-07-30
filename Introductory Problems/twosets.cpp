#include<iostream>
#include<vector>
using namespace std;
 
int main(void){
    int n = 0; 
    cin >> n; 
    long long sum = (long long) n * (n + 1) / 2; 
    vector <int> a, b;  
    if (sum % 2 == 1)
        cout << "NO";
    else{
        cout << "YES" << "\n"; 
        long long half = sum / 2; 
        for (int i = n; i >= 1; i--){
            if (i <= half){
                a.push_back(i); 
                half -= i; 
            }
            else{
                b.push_back(i); 
            }
        }
        cout << a.size() << "\n"; 
        for (int i : a)
            cout << i << " "; 
        cout << "\n"; 
        cout << b.size() << "\n"; 
        for (int i : b)
            cout << i << " "; 
        cout << "\n"; 
    }
    return 0; 
}