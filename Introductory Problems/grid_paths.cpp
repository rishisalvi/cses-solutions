#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int path[48];
bool pathway[9][9];
int nextRow[4] = {1, -1, 0, 0};
int nextCol[4] = {0, 0, 1, -1};
int findWays(int index, int row, int col){
    if (pathway[row][col - 1] && pathway[row][col + 1] && !(pathway[row - 1][col] || pathway[row + 1][col]))
        return 0; 
    if (!(pathway[row][col - 1] || pathway[row][col + 1]) && pathway[row - 1][col] && pathway[row + 1][col])
        return 0; 
    
    if (row == 7 && col == 1)
        return index == 48; 

    pathway[row][col] = true; 

    int ways = 0;
    if (path[index] < 4){
        if (!pathway[row + nextRow[path[index]]][col + nextCol[path[index]]])
            ways += findWays(index + 1, row + nextRow[path[index]], col + nextCol[path[index]]);
    }
    else{
        for (int i = 0; i < 4; i++){
            if (!pathway[row + nextRow[i]][col + nextCol[i]])
                ways += findWays(index + 1, row + nextRow[i], col + nextCol[i]);
        }
    }

    pathway[row][col] = false;
    return ways; 
}

int main(){
    string line;
    cin >> line;
    for (int i = 0; i < 48; i++){
        char curr = line[i];
        if (curr == 'D')
            path[i] = 0;
        else if (curr == 'U')
            path[i] = 1;
        else if (curr == 'R')
            path[i] = 2;
        else if (curr == 'L')
            path[i] = 3;
        else
            path[i] = 4;
    }
    for (int r = 0; r <= 8; r++){
        for (int c = 0; c <= 8; c++){
            if (r == 0 || r == 8 || c == 0 || c == 8)
                pathway[r][c] = true; 
            else
                pathway[r][c] = false;
        }
    }
    cout << findWays(0, 1, 1);
}