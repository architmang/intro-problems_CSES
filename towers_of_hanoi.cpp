#include<bits/stdc++.h>
using namespace std;
void simulation(int diskNum, vector<pair<int, int>>& moves, int source, int dest, int aux)
{
    if(diskNum == 1)
    {
        moves.push_back(make_pair(source,dest));
        return;
    }
    // move N-1 disks from left to aux
    simulation(diskNum -1, moves, source, aux, dest);
// now actually move the heaviest disk
    moves.push_back(make_pair(source,dest));
    // move N-1 disks from aux to right
    simulation(diskNum -1, moves, aux, dest, source);
}
int main()
{
    int n; cin >> n;
    int left = 1, middle = 2, right = 3;
    vector<pair<int, int>> moves;
    simulation(n, moves, left, right, middle);
    cout << moves.size() << endl;
    for(auto m: moves)
    {
        cout << m.first << " " << m.second << endl;
    }
    return 0;
}