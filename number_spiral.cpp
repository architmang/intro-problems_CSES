#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll x, y;
        cin >> y >> x;
        // row y, column x
        ll grid_size = max(x, y);
        // number is between 1, grid_size**2
        // 1, 3, 7, 13, 21
        // diff = 2, 4, 6, 8
        // summed = 2, 6, 12, 20
        // N = n-1
        // 2*(1+2+3+4)
        // (n-1)*n
        ll last_diagonal_elem = grid_size * (grid_size-1);
        if(grid_size == x)
        { // column same
            if(grid_size%2 == 1) // odd
            {
                cout << last_diagonal_elem + abs(y-grid_size) + 1 << endl;
            }
            else{
                cout << last_diagonal_elem - abs(y-grid_size) + 1<< endl;
            }
        }
        else
        { // row same
            if(grid_size%2 == 1) // odd
            {
                cout << last_diagonal_elem - abs(x-grid_size) + 1<< endl;
            }
            else{
                cout << last_diagonal_elem + abs(x-grid_size) + 1<< endl;
            }
        }
    }
    return 0;
}