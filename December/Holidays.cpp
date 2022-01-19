#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n , m;
   cin >> n >> m;
   vector <int> v(n);
   for(int i = 0; i < n; i++) {
      cin >> v[i];
   }
   int ans = 0;
   for(int i = 0; i < n; i++) {
       if(m <= i + 1) {
          cout << v[m - 1] <<"\n";
          return;
       }
       else {
          m -= i + 1;
       }
   }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
