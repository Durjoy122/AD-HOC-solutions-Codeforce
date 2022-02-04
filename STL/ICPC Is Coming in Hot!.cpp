#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    map<char , int> mp;
    int mx = 0;
    for(auto u : s) {
        mp[u]++;
        mx = max(mx , mp[u]);
    }
    for(auto u : s) {
        if(mx == mp[u]) {
            for(auto it : mp) {
               if(mx == it.second) {
                   cout << it.first <<"\n";
                   break;
               }
               else {
                   continue;
               }
            }
            break;
        }
    }
    return 0;
}
