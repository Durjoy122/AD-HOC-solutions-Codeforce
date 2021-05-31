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
        int cnt = 0;
        if(n == 2) {
            if(s[0] == '1') {
                if(s[1] != '0') {
                    cout <<"YES\n";
                    continue;
                }
                else {
                    cout <<"NO\n";
                    continue;
                }
            }
            else {
                if(s[0] != 0 && s[1] != 0) {
                    if(s[0] == s[1]) {
                        cout <<"YES\n";
                        continue;
                    }
                    else {
                        cout <<"NO\n";
                        continue;
                    }
                }
            }
        }
        bool ok = false;
        for(int i = 1; i < n; i++) {
            if(s[i] != 0) {
              if(s[i - 1] > s[i]) {
                  ok = true;
                  break;
              }
              if(s[i] == 0) {
                 ok = true;
                 break;
              }
           }
        }
        if(ok) {
            cout <<"NO\n";
        }
        else if(s[n - 1] != s[n - 2] || s[0]) {
           cout <<"NO\n";
        }
        else {
           cout <<"YES\n";
        }
    }
    return 0;
}
