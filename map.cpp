#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for(int i = 1; i < n; i++) {
        ans += max(0 , (v[i -1] - v[i]));
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
