#include<bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin >> t;
   while(t--) {
       int n;
       cin >> n;
       vector <int> v(3);
       for(int i = 0; i < n; i++) {
          int a;
          cin >> a;
          v[a % 3]++;
       }
       int ans = 0;
       for(int i = 0; i < 2; i++) {
          for(int j = 0; j < 3; j++) {
              if(v[j] > n / 3){
                 int dif = (v[j] - n / 3);
                 v[j] -= dif;
                 v[(j + 1) % 3] += dif;
                 ans += dif;
              }
          }
       }
       cout << ans <<"\n";
   }
   return 0;
}
