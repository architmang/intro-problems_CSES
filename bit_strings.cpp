#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9+7;
int main()
{
    ll n; cin >> n;
    // bitwise shift by n places: pow(2, n)
    ll ans = 1;
    for(int i=0; i<n; i++)
    {
        ans = ans << 1;
        ans = ans % mod;
    }
    cout << ans % mod;
    return 0;
}