#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
       string s;
       cin >> s;
       if(s[0] == 'B') {
          cout <<"NO\n";
          continue;
       }
       else {
          bool ok = false;
          for(int i = 1; i < s.size(); i++) {
              if(s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'C') {
                  ok = true;
                  break;
              }
              if(s[i - 1] == 'A' && s[i] == 'C' && s[i + 1] == 'B') {
                  ok = true;
                  break;
              }
          }
          int a = 0 , b = 0 , c = 0;
          for(int i = 0; i < s.size(); i++) {
               if(s[i] == 'A') {
                  a++;
               }
               else if(s[i] == 'B') {
                  b++;
               }
               else {
                  c++;
               }
          }
          if(ok) {
             cout <<"NO\n";
          }
          else if(b + c ==  a) {
            cout <<"YES\n";
          }
          else {
             cout <<"NO\n";
          }
       }
    }
    return 0;
}
