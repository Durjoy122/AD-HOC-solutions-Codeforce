#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n , a;
   cin >> n >> a;
   vector <int> v(n);
   int sum = 0;
   for(int i = 0; i < n; i++) {
      cin >> v[i];
      sum += v[i];
   }
   if(sum < a) {
      cout <<"-1\n";
   }
   else {
      int mx = 0, mi = v[0];
      for(int i = 0; i < n; i++) {
          mx = max(mx , v[i]);
          mi = min(mi , v[i]);
      }
      int r = 0;
      int l = mx + 1;
      while(l + 1 != r) {
         int m = (l + r) / 2;
         int tot = 0;
         for(int i = 0; i < n; i++) {
             if(v[i] > m) {
                tot += (v[i] - m);
             }
             else {
                continue;
             }
         }
         if(tot >= a) {
            l = m;
         }
         else {
            r = m;
         }
      }
      cout << min(l , mi) <<"\n";
   }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
