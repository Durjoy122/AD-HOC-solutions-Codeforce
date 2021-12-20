#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;
pair<int, int> v[1000];

void solve() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll sum = 1 , tot = 0;
    for(int i = 1; i < n; i++) {
        sum = v[i - 1] * ll(v[i]);
        if(sum >= tot) {
            tot = sum;
        }
        else {
            continue;
        }
    }
    cout << tot <<"\n";
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
