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
        char c[n][n];
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < n; j++) {
                cin >> c[i][j];
            }
        }
        bool ok = true;
        for(int i = 0; i < 2; i++) {
           if(c[0][i] == '1') {
              if(c[1][i] == '1') {
                  ok = false;
                  break;
              }
           }
        }
        if(ok) {
            cout <<"YES\n";
        }
        else {
            cout <<"NO\n";
        }
    }
    return 0;
}
