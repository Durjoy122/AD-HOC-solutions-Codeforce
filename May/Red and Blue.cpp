#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n;
        vector <int> v(111);
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        cin >> m;
        vector <int> x(111);
        for(int i = 1; i <= m; i++) {
            cin >> x[i];
        }
        int ans = 0 , tot = 0;
        for(int i = 0; i <= n; i++) {
            tot += v[i];
            int k = tot;
            for(int j = 0; j <= m; j++) {
                k += x[j];
                ans = max(ans , k);
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}
