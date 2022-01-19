#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n , m , k;
   cin >> n >> m >> k;
   vector <int> v;
   for(int i = m; i <= k; i += m) {
      if(i - n > 0) {
         v.push_back(i - n);
      }
      else {
         continue;
      }
   }
   if(v.size() == 0) {
      cout <<"-1\n";
   }
   else {
      for(auto&it : v) {
         cout << it <<" ";
      }
      cout <<"\n";
   }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
