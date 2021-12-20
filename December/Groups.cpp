#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int v[n + 1][n + 1];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n + 1; j++) {
                cin >> v[i][j];
            }
        }
        bool ok = false;
        int ans = 0 , cnt = 0 , temp = 0;
        for(int i = 0; i < n; i = i + 2) {
            for(int j = 0; j < n + 1; j++) {
                if(v[i][j] ==  1) {
                    cnt++;
                }
                else if(v[i + 1][j] == 1) {
                    temp++;
                }
                if(v[i][j]) {
                    if(v[i][j] == v[i + 1][j]) {
                        ok = true;
                    }
                    else {
                        continue;
                    }
                }
            }
        }
        if(cnt == temp && ok) {
           cout <<"YES\n";
        }
        else {
           `cout <<"NO\n";
        }
    }
    return 0;
}

