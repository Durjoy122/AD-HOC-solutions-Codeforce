#include<bits/stdc++.h>
using namespace std;
using ll = long long;

/* [💭] [💡] [🎈] */

void ans() {
    ll x , y;
    cin >> x >> y;
    ll ans = res(x , y);
    cout << ans <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
       ans();
    }
    return 0;
}
