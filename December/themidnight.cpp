#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;

void solve() {
    int n , k;
    cin >> n >> k;
    int v[n * k];
    for(int i = 0; i < n * k; i++) {
        cin >> v[i];
    }
    int ans = 0;
    int tot = (n - 1) / 2 * k;
    for(int i = 0; i < k; i++) {
        ans += (ll) v[tot];
        tot += n / 2 + 1;
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

