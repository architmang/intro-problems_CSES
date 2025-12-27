#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    ll sum = n*(n+1);
    sum /= 2ll;
    if(sum %2)
    {
        cout << "NO";
        return 0;
    }
    else{
        // set need not be consecutive, but ans is always possible
        ll target = sum / 2ll;
        cout << "YES" << endl;
        set<ll> st1, st_main;
        for(int i=1; i<=n; i++)
        {
            st_main.insert(i);
        }
        ll curr_sum  = 0;
        while(1)
        {
            ll maxi = *st_main.rbegin();
            if(curr_sum == target) break;
            else if(maxi + curr_sum > target)
            {
                st1.insert(target - curr_sum);
                st_main.erase(target-curr_sum);
                curr_sum += target - curr_sum; // update at end
            }
            else{
                st1.insert(maxi);
                st_main.erase(maxi);
                curr_sum += maxi;
            }
        }
        cout << st1.size() << endl;
        for(auto k: st1)
            cout << k << " ";
        cout << endl << st_main.size() << endl;
        for(auto k: st_main)
            cout << k << " ";
    }
    return 0;
}