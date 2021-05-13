#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
       ll n;
       cin >> n;
       map<int,int> mp;
       ll ans = 0;
       for(int i = 0; i < n; i++) {
           ll x;
           cin >> x;
           ans += mp[x - i];
           mp[x - i]++;  // <--- x = [1 , 2, 3 , 4 , 5 , 7 , 1]  || mp [x - i]++ == [1 , 2, 3, 4, 5 , 1 , 1]//
       }
       cout << ans <<"\n";
    }
    return 0;
}
