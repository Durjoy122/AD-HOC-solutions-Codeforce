#include<bits/stdc++.h>
using namespace std;

pair<int,int> v[1111];

void solve() {
   int aa , bb;
   cin >> aa >> bb;
   string a = to_string(aa);
   string b = to_string(bb);
   int p = a.size() - 1;
   int pt = b.size() - 1;
   string s;
   while(pt >= 0 || p >= 0) {
      if(p > 0 && pt < 0) {
         cout <<"-1\n";
         return;
      }
      int ad = 0;
      if(p >= 0) {
         ad = a[p] - '0'; // Last Number of String a
      }
      int bd = b[pt] - '0'; //Last Number of String b
      int c = bd - ad;
      if(c >= 0) {
         s = string(1, '0'+c) + s;
         p--;
         pt--;
      }
      else {
          s = string(1, '0'+(10+c)) + s;
          p--;
          pt--;
          if(pt < 0 || b[pt] != '1') {
             s = "-1";
             break;
          }
          pt--;
      }
   }
   while(s[0] == '0') {
     s = s.substr(1);
   }
   cout << s.c_str() <<"\n";
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
