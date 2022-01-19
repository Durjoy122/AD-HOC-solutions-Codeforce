#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int n;
   cin >> n;
   string s;
   cin >> s;
   vector <ll> v(n);
   for(int i = 0; i < n; i++) {
       cin >> v[i];
   }
   ll tot = -1;
   ll ans = 1000000000000000000LL;
   for(ll i = 0; i < n; i++) {
       if(s[i] == 'R') {
           tot = v[i];
       }
       else {
          if(tot !=  -1) {
             ans = min(ans , (v[i] - tot) / 2);
          }
       }
   }
   if(ans == 1000000000000000000LL) {
      cout <<"-1\n";
   }
   else {
      cout << ans << "\n";
   }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}

