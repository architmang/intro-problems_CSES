#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    string s; cin >> s;
    char ch = '\0';
    int cnt = 1, ans = 0;
    for(char c: s)
    {
        if(ch == c)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
        ch = c;
    }
    cout << ans;
    return 0;
}