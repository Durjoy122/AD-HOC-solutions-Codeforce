#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;
pair<int, int> v[1000];

void solve() {
    ll a , b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll pre = -1e9 , ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') {
            continue;
        }
        ll len = i - pre;
        len--;
        if(b * len < a) {
           ans += b * len;
        }
        else {
            ans += a;
        }
        pre = i;
    }
    cout << ans <<"\n";
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
