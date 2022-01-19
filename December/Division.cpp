#include<bits/stdc++.h>
using namespace std;

pair<int,int> v[1111];

void solve() {
   int n;
   cin >> n;
   set <int> s;
   for(int i = 1; i * i <= n; i++) {
       s.insert(i * i);
   }
   for(int i = 1; i * i <= n; i++) {
      s.insert(i * i * i);
   }
   cout << s.size() <<"\n";
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
