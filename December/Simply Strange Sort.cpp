#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
       int n;
       cin >> n;
       vector <int> v(n);
       for(int i = 1; i <= n; i++) {
           cin >> v[i];
       }
       bool ok = false;
       for(int i = 1; i <= n; i++) {
          if(v[i] < v[i + 1]) {
             ok = true;
             break;
          }
       }
       int ans = 0;
       while(ok) {
          ans++;
          if(ans & 1) {
             for(int i = 1; i < n; i = i + 2) {
                if(v[i] > v[i + 1]) {
                    swap(v[i] , v[i + 1]);
                }
             }
          }
          else {
             for(int i = 2; i < n; i = i + 2) {
                if(v[i] > v[i + 1]) {
                    swap(v[i] , v[i + 1]);
                }
             }
          }
       }
       cout << ans <<"\n";
    }
    return 0;
}
