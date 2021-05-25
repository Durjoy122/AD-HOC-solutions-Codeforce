#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) {
      string s;
      cin >> s;
      int n = s.size();
      set <string> st;
      st.insert(s);
      if(s.size() == 1) {
         cout << s.size() <<"\n";
      }
      else {
         int cnt = 0 , ans = 0 , tot = 0;
         for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A') {
               cnt++;
            }
            else {
                if(cnt > 0) {
                    cnt--;
                    ans += 2;
                }
                else {
                    tot++;
                }
            }
         }
         cout << n - (tot / 2 * 2 + ans) <<"\n";
      }
  }
  return 0;
}
