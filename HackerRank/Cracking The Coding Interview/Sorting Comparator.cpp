#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player 
{
    string name;
    int score;
}; 

bool compare(Player a, Player b)
{
    if(a.score != b.score)
    {
        return a.score > b.score;
    }
    else
    {
        return a.name < b.name;
    }
}

int main() 
{
    
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score,i;
    for(i = 0; i < n; i++)
    {
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    sort(players.begin(),players.end(),compare);
    for(i = 0; i < players.size(); i++) 
    {
        cout << players[i].name << " " << players[i].score << endl;
    }
    return 0;
}
