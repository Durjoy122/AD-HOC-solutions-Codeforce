#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector <ll> v;
        v.resize(n);
        for(auto&it : v) {
           cin >> it;
        }
        ll ans = 0;
        for(ll i = 0; i < n; i++) {
            if(v[i] < v[ans]) {
                ans = i;
            }
            else {
                continue;
            }
        }
        cout << n - 1 <<'\n';
        for(ll i = 0; i < n; i++) {
            if(i != ans) {
                cout << i + 1 <<" "<< ans + 1 <<" "<<v[ans] +  abs(ans - i) % 2 <<" "<< v[ans] <<"\n";
            }
        }
    }
    return 0;
}
