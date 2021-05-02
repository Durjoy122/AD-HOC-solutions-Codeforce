#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*[💭] [💡] [🎈] */

void ans() {
   ll n , m , k;
   cin >> n >> m >> k;
   ll ans = n * m - 1;
   if(ans == k) {
      cout <<"YES\n";
   }
   else {
      cout <<"NO\n";
   }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
      ans();
    }
    return 0;
}
