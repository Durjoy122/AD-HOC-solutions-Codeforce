#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        int one = 0 , two  = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] == 0) {
                one++;
            }
            else if(v[i] == 1) {
                two++;
            }
        }
        cout << (1LL << one) * two <<"\n";
    }
    return 0;
}

