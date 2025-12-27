#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int a, n;  cin >> n;
    ll sum = 0, actual_sum = 1ll*n*(n+1)/2;
    for(int i=0; i<n-1; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << actual_sum - sum;
    return 0;
}