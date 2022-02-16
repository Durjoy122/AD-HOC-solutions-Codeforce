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
    for(int i = 0; i < n - 1; i++) {
        int ans = v[i] + v[i + 1];
        if(ans & 1) {
           if(v[i] > v[i + 1]) {
              swap(v[i] , v[i + 1]);
           }
        }
        else ans = 0;
    }
    int cnt = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] >= v[i - 1]) cnt++;
        else continue;
    }
    if(cnt + 1 == n) cout <<"Yes\n";
    else cout <<"No\n";
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
