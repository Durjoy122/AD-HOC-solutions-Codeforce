#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int mx = 0 , mi = 0;
        for(int i = 1; i < n; i++) {
            mx = max(v[i] , v[i - 1]);
            mi = min(v[i] , v[i - 1]);
            while(mi * 2 < mx) {
               mi *= 2;
               ans++;
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}
