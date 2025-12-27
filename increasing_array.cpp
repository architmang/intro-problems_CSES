#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> a;
    a.resize(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    ll moves = 0;
    for(int i=1; i<n; i++)
    {
        // compare a[i] with a[i-1]
        if(a[i] < a[i-1])
        {
            moves+= a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }   
    cout << moves;
    return 0;
}