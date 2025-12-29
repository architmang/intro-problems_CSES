#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(int idx, ll sum1, ll sum2, vector<ll> p)
{
    if(idx == p.size())
        return abs(sum1-sum2);

    ll ans1 = solve(idx+1, sum1+p[idx], sum2, p); // choose
    ll ans2 = solve(idx+1, sum1, sum2+p[idx], p); // not choose

    return min(ans1, ans2);
}

int main()
{
    int n; cin >> n;
    vector<ll> p; p.resize(n);

    for(int i=0; i<n; i++)
        cin >> p[i];
    
    ll sum1 = 0, sum2 = 0;
    cout << solve(0, sum1, sum2, p);
    return 0;
}