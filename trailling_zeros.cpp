#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9+7;
int main()
{
    ll n; cin >> n;
    ll ans = 0;

    for(int i=5; i<= n; i = i*5)
    {
        ans += n/i;
    }
    cout << ans;
    return 0;
}