#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    for(int i=0; i< (1<<n); i++)
    {
        int ans = i ^ (i>>1);
        auto str = bitset<32> (ans);
        cout << str.to_string().substr(32-n, n) << endl;
    }
    return 0;
}