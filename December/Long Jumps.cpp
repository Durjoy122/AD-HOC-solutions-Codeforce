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
        vector <int> v(n) , t;
        int mx = 0;
        for(int i = 0; i < n; i++) {
             cin >> v[i];
             mx = max(mx , v[i]);
        }
        if(mx > n) {
            cout << mx <<"\n";
        }
        else {
            for(int i = 0; i < n; i++) {
                t[i] = v[i] + i;
            }
            int ans = 0;
            for(auto&it : t) {
                ans = max(ans , it);
            }
            cout << ans <<"\n";
        }
    }
    return 0;
}
