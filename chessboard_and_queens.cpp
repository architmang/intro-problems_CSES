#include<bits/stdc++.h>
using namespace std;

int ans = 0;
int chessboard[8][8] = {0};

bool column[8] = {false};
bool first_diag[15] = {false};
bool second_diag[15] = {false};

void dfs(int row)
{
    if(row == 8)
    {
        ans++;
        return;
    }
    // check for columns, can i place here?
    for(int i=0; i<8; i++)
    {
        if(chessboard[row][i] == -1) continue;
        if(column[i] == true) continue;
        if(first_diag[row + i] == true) continue;
        if(second_diag[row - i + 7] == true) continue;

        column[i] = true;
        first_diag[row + i] = true;
        second_diag[row-i + 7] = true;

        dfs(row+1);

        // back track
        column[i] = false;
        first_diag[row + i] = false;
        second_diag[row-i + 7] = false;
    }
}
int main()
{
    char ch;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin >> ch;
            if(ch == '.')
                chessboard[i][j] = 1;
            else chessboard[i][j] = -1;
        }
    }
    dfs(0); // row wise dfs
    cout << ans;
    return 0;
}