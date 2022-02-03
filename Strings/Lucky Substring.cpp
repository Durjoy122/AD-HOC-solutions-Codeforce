#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    cin >> s;
    vector <char> v;
    for(int i = 1; i < s.size(); i++) {
         if(s[i] == '4') {
            if(s[i - 1] != '4' && s[i - 1] != '7') {
               v.push_back(s[i]);
            }
            else {
                continue;
            }
         }
         else if(s[i] == '7') {
            if(s[i - 1] != '4' && s[i - 1] != '7') {
               v.push_back(s[i]);
            }
            else {
                continue;
            }
         }
    }
    int ans = 0;
    for(auto&it : v) {
        auto x = it - '0';
        ans = max(ans , x);
    }
    if(ans != 4 && ans != 7) {
        cout <<"-1\n";
    }
    else {
        cout << ans <<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
