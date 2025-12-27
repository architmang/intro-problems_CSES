#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n; cin >> n;
    for(int k=1; k<=n; k++)
    {
        // total ways: k**2 (k**2-1) / 2
        // 4*(k-1)(k-2)
        // for positions & orientation: vertical or horizontal
        ll total = 1ll* k*k * (k*k - 1);
        total /= 1ll*2;
        ll sub = 1ll*4*(k-1)*(k-2);
        if(k <= 2) sub = 0;
        cout << total-sub << endl;
    }
    return 0;
}