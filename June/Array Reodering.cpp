#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int Maxn = 2e5 + 10;

ll t ;
vector <ll> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    while(t--) {
       ll n;
       cin >> n;
       v.resize(n);
       vector <ll> a;
       ll temp = 0 , tot = 0;
       for(auto&it : v) {
           cin >> it;
           if(it & 1) {
               temp++;
               a.push_back(it);
           }
           else {
              tot++;
           }
       }
       ll ans = 0;
       for(int i = 0; i < a.size(); i++) {
          for(int j = i + 1; j < a.size(); j++) {
              if(__gcd(a[i] , a[j]) > 1) {
                 ans++;
              }
          }
       }
       ans += temp * tot;
       ans += tot  * (temp - 1) / 2;
       cout << ans <<"\n";
    }
    return 0;
}
