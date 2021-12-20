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
        int cnt = 0;
        bool ok = true;
        for(int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if(ok) {
                if(x == 1 && i < n) {
                    cnt += x;
                }
                else {
                    ok = false;
                }
            }
        }
        if(cnt & 1) {
            cout <<"Second\n";
        }
        else {
            cout <<"First\n";
        }
    }
    return 0;
}
