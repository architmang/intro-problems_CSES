#include<bits/stdc++.h>
using namespace std; 
int solve(int a, int b)
{
    if((a+b)%3) return 0; // cant do
    if(max(a, b) > 2*min(a, b)) return 0;
    return 1;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(solve(a, b))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}