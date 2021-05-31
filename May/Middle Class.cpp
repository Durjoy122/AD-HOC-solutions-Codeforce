#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        ll n , m;
        cin >> n >> m;
        vector <ll> v(n) , k;
        for(auto&it : v) {
            cin >> it;
        }
        sort(v.rbegin() , v.rend());
        ll sum = 0 , cnt = 0;
        for(ll i = 0; i < n; i++) {
            sum += v[i];
            if(sum / (i  + 1) < m) {
                break;
            }
            else {
                cnt++;
            }
        }
        cout << cnt <<"\n";
    }
    return 0;
}
