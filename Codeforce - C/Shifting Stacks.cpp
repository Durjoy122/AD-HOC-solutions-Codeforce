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
      for(ll i = 0; i < n; i++) {
         cin >> v[i];
      }
      bool ok = true;
      ll sum = 0;
      for(int i = 0; i < n; i++) {
         sum += v[i];
         sum = sum - i;
         cout << sum <<" ";
         if(sum < 0) {
             ok = false;
             break;
         }
         else {
            continue;
         }
      }
      if(ok) {
         cout <<"YES\n";
      }
      else {
         cout <<"NO\n";
      }
  }
  return 0;
}
