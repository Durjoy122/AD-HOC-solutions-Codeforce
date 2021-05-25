#include<bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int n;
   cin >> n;
   bool ok = false;
   if(n % 3 == 0) {
       ok = true;
   }
   int cnt = 0;
   if(ok) {
       int n;
       cin >> n;
       vector <int> v(n), k;
       for(auto&it : v) {
          cin >> it;
       }
       sort(v.begin() , v.end());
       int t = 0;
       for(int i = 0; i < n; i++) {
          k.push_back(v[i]);
          t = 2;
          for(int j = 1; ; j++) {
               if(v[j - 1] < v[j]) {
                   if(v[j] % v[j - 1] == 0) {
                      cnt++;
                      k.push_back(v[j]);
                      t--;
                   }
                   if(t == 0) {
                      break;
                   }
               }
          }
          int br = 0;
          if(cnt == n - 2) {
             for(int i = 0; i < k.size(); i++) {
                 br++;
                 cout << v[i] <<" ";
                 if(br == 3) {
                    cout <<"\n";
                    br = 0;
                 }
             }
          }
          else {
             cout <<"-1\n";
          }
       }
   }
   else {
      cout <<"1\n";
   }
   return 0;
}
