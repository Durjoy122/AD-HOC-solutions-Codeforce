#include<bits/stdc++.h>
using namespace std;
const int Maxn = 2e5 + 10;

int v[Maxn] , k[Maxn];
set <int> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
       int n;
       cin >> n;
       s.clear();
       for(int i = 1; i <= n; i++) {
           cin >> v[i];
           k[i] = 0;
           s.insert(v[i]);
       }
       for(int i = 2; i <= n; i++) {
          if(v[i] != v[i - 1]) {
             k[v[i]]++;
          }
       }
       for(int i = 1; i <= n; i++) {
          if(v[n] != i) {
              k[i]++;
          }
       }
       int res = 235 + 5;
       for(int i = 1; i <= n; i++) {
          if(s.count(i)) {
             res = min(res , k[i]);
          }
        }
        cout << res <<"\n";
    }
    return 0;
}
