#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;
pair<int, int> v[1000];

void solve() {
    string s;
    cin >> s;
    int l = 0 , r = s.size() - 1;
    for(int i = s.size() - 1; i >= 0; i--) {
        char c = 'a' + i;
        if(s[l] == c) {
            l++;
        }
        else if(s[r] == c) {
            r--;
        }
        else {
            cout <<"NO\n";
            return;
        }
    }
    cout <<"YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}
