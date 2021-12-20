#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void solve() {
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        ll have = 1;
        while (have < n && have <= k)
        {
            ans++;
            have += have;
        }
        cout << have <<"\n";
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
