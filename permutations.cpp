#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    // a1 a2 ....  an be beatufil
    // a1 a2 ...an-1
    // 5
    // n/2 is 2
    // 1, 2, ....... n/2, n/2 +1 ....... n
    // assume n even
    // 1 , 3, 5 ....... n-1
    // 2, 4, 6, ........n
    if(n == 1)
    {
        cout << "1";
        return 0;
    }
    if(n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for(int i=2; i<=n; i+=2)
    {
        cout << i << " ";
    }
    for(int i=1; i<=n; i+=2)
    {
        cout << i << " ";
    }
    return 0;
}