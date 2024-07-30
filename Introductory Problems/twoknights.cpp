#include<iostream>
 
using namespace std;
 
int main(void){
    int n = 0; 
    cin >> n; 
    for (int i = 1; i <= n; i++){
        long ways = ((long)i * i * (i * i - 1)) / 2; 
        long notWorking = 4 * (i - 1) * (i - 2); 
        cout << ways - notWorking << "\n"; 
    }
    return 0; 
}