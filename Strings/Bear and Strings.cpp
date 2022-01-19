#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   string s;
   cin >> s;
   int res = 0;
   int tot = -1;
   for(int i = 4; i <= s.size(); i++) {
       if(s.substr(i - 4, 4) == "bear") {
          tot = i - 4;
       }
       res += tot + 1;
   }
   cout << res <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}

