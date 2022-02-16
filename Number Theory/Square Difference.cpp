#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n , m;
    cin >> n >> m;
    ll res = n - m;
    if(res != 1) {
        cout <<"NO\n";
        return;
    }
    ll ans = n + m;
    for(ll i = 2; i * i <= ans; i++) {
        if(ans % i == 0) {
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
