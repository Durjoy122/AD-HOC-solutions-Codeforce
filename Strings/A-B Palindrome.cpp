#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n , m;
   cin >> n >> m;
   string s;
   cin >> s;
   int in = s.size();
   int cnt = 0 , tot = in - 1;
   bool ok = false;
   if(s.size() == n == 1) {
      cout <<"0\n";
      return;
   }
   for(int i = 0; i < in; i++) {
       if(s[i] == '?') {
           cnt++;
       }
       else {
          continue;
       }
   }
   if(cnt == n + m || ok || !cnt) {
      cout <<"-1\n";
   }
   else {
      if(n == 0) {
        if(s == "0") {
            cout <<"-1\n";
            return;
        }
      }
      if(cnt % 2 == 0) {
          for(int i = 0; i < n - 1; i++) {
              if(s[i] == '?' && s[i] == s[i + 1]) {
                 if(i & 1) {
                    s[i] = '0';
                 }
                 else {
                    s[i] = '1';
                 }
              }
              else {
                 s[i] = '1';
              }
          }
          if(s[in - 1] = '?') {
             s[in - 1] = s[0];
          }
      }
      else {
        int i = 0 , temp = in - 1;
        while(in / 2 > 0) {
            if(s[i] == '?') {
                if(s[temp] == '?') {
                    s[i] = '1';
                    s[temp] = '1';
                }
                else if(s[temp] == '1') {
                    s[i] = '1';
                }
                else {
                    s[i] = '0';
                }
            }
            i++;
            temp--;
            in--;
        }
      }
      cout << s <<"\n";
   }
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
