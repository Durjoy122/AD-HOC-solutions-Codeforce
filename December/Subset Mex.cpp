#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void solve() {
    string s;
    cin >> s;
    map <char , int> mp;
    for(auto&it : s) {
        mp[it]++;
    }
    if(mp['o'] == '0') {
        cout <<"YES\n";
    }
    else if(mp['-'] % mp['o'] == 0) {
        cout <<"YES\n";
    }
    else {
        cout <<"NO\n";
    }
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   solve();
   return 0;
}
