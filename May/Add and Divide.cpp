#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        ll n , m , k;
        cin >> n >> m >> k;
        vector <int> v(n);
        for(auto&it : v) {
            cin >> it;
        }
        ll x , y;
        while(m--) {
            cin >> x >> y;
            x-- , y--;
            cout << v[y] - v[x] - 2 * y + 2 * x + k - 1 <<"\n";
        }
    }
    return 0;
}
