#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;

void solve() {
   int n;
   cin >> n;
   vector <int> v(n) , t(n);
   int sum = 0 , sum2 = 0;
   for(int i = 0; i < n; i++) {
       cin >> v[i];
       sum += v[i];
   }
   for(int i = 0; i < n; i++) {
       cin >> t[i];
       sum2 += t[i];
   }
   if(sum == sum2) {
       cout <<"YES\n";
   }
   else {
      sort(v.begin() , v.end());
      sort(t.begin() , t.end());
      bool ok = false;
      for(int i = 0; i < n; i++) {
         if(v[i] != t[i]) {
            if(v[i] < t[i]) {
                v[i]++;
                if(v[i] != t[i]) {
                    ok = true;
                    break;
                }
                else {
                    continue;
                }
            }
            else {
                if(v[i] > t[i]) {
                    v[i]--;
                    if(v[i] != t[i]) {
                        ok = true;
                        break;
                    }
                    else {
                        continue;
                    }
                }
            }
         }
         else {
            continue;
         }
      }
      if(ok) {
         cout <<"NO\n";
      }
      else {
         cout <<"YES\n";
      }
   }
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
