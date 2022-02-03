#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int n;
   cin >> n;
   vector <int> v(n);
   for(int i = 0; i < n; i++) {
      cin >> v[i];
   }
   int ans = 0 , cnt = 0;
   for(int i = 1; i < n; i++) {
       if(v[i] - v[i - 1] == 1) {
          ans++;
       }
       else {
          continue;
       }
   }
   if(ans + 1 == n){
       cout << ans + 1 <<"\n";
       for(int i = 0; i < n; i++) {
          cout <<"L";
       }
       cout <<"\n";
   }
   else {
      int a = 0;
      int b = n - 1;
      int p = 0;
      vector <char> c;
      while(a <= b) {
          if((v[a] > p) && (v[a] < v[b] || v[b] <= p)) {
             c.push_back('L');
             p = v[a];
             a++;
          }
          else if((v[b] > p) && (v[a] > v[b] || v[a] <= p)) {
             c.push_back('R');
             p = v[b];
             b--;
          }
          else {
             break;
          }
      }
      cout << c.size() <<"\n";
      for(auto&it : c) {
        cout << it;
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
