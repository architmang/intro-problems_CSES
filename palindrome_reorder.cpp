#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s; cin >> s;
    int n = s.size();

    map<char, int> fmap;
    for(auto c: s) fmap[c]++;
    
    int odd_cnt = 0;
    char odd_char = 'a';

    for(auto p: fmap)
    {
        if(p.second % 2)
        {
            odd_char = p.first;
            odd_cnt++;
        }
    }
    if(odd_cnt > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    // c1 c2 ....... middle ......... c2 c1
    // any odd one is middle
    // ensure rest all even
    string left, middle;
    for(auto p: fmap)
    {
        // count, char
        // fill even ones
        if(p.second %2 == 0)
            left += string(p.second/2, p.first);
    }
    if(n%2)
    {
        // count, char
        // fill odd ones
        middle = string(fmap[odd_char], odd_char);
    }
    string right(left.rbegin(), left.rend());
    cout << left << middle << right;
    return 0;
}