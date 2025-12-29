#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    int n = s.size();
    vector<string> unique;
    sort(s.begin(), s.end());
    do{
        unique.push_back(s);
    }while(next_permutation(s.begin(), s.end())); 
    // next_permutation already generates unique permutations
    // if the string is sorted initially
    cout << unique.size() << endl;
    for(auto k: unique)
        cout << k << endl;
    return 0;
}