#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin >> t;
     while(t--) {
         string s , t;
         cin >> s >> t;
         int x = t.size() - s.size();
         if(x > 3) {
             int tt = stoi(t);
             int dd = stoi(s);
             if(dd % tt == 0) {
                 cout <<"YES\n";
                 continue;
             }
             else {
                 cout <<"NO\n";
                 continue;
             }
         }
         for(int i = 0; i < x; i++) {
             s.push_back('0');
         }
         int int1 = stoi(s);
         int int2 = stoi(t);
         if(int1 < int2) {
             s.push_back('0');
             int nx = stoi(s);
             if(nx % int2 == 0) {
                 cout <<"YES\n";
             }
             else {
                 s.push_back('0');
                 int tx = stoi(s);
                 if(tx % int2 == 0) {
                     cout <<"YES\n";
                 }
                 else {
                     cout <<"NO\n";
                 }
             }
         }
         else {
            cout <<"YES\n";
         }
     }
     return 0;
}


