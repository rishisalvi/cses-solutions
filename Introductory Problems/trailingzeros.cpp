#include<iostream>
using namespace std; 
int main(){
    int n; 
    cin >> n; 
    int count5 = 0; 
    int five = 5; 
    while (five <= n){
        int temp = five; 
        while (temp % 5 == 0){
            count5++; 
            temp /= 5; 
        }
        five += 5; 
    }
    cout << count5;  
    return 0; 
}