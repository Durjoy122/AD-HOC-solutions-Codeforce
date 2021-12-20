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
     vector <ll> v(n);
     vector <pair<ll,ll>> x;
     for(int i = 0; i < n; i++) {
        cin >> v[i];
        x.push_back({v[i] , i + 1});
     }
     sort(x.begin() , x.end());
     ll ans = 0;
     for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            if(x[i].first * x[j].first >= 2 * n) {
                break;
            }
            if(x[i].first * x[j].first == x[i].second + x[j].second) {
                ans++;
            }
        }
     }
     cout << ans <<"\n";
  }
  return 0;
}
