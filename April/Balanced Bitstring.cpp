#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;
        string s;
        cin >> s;
        bool ok = false;
        char c;
        for(int i = 0; i < m; i++) {
            c = s[i];
            for(int j = i; j < n; j += m) {
                if(c == '?') {
                    c = s[j];
                }
                else if(s[j] != '?' && c != s[j]) {
                    ok = true;
                    break;
                }
            }
            if(c != '?') {
                for(int j = i; j < n; j += m) {
                    s[j] = c;
                }
            }
        }
        cout << s;
        exit(0);
        if(ok) {
            cout <<"NO\n";
        }
        else {
            int cnt[3];
            memset(cnt , 0 , sizeof(cnt));
            for(int i = 0; i < m; i++) {
                if(s[i] == '?') {
                    cnt[2]++;
                }
                else {
                    cnt[s[i] -'0']++;
                }
            }
            int tot = cnt[2] + cnt[1] - cnt[0];
            if(tot >= 0 && (tot % 2) == 0 && tot / 2 <= cnt[2]) {
                cout <<"YES\n";
            }
            else {
                cout <<"NO\n";
            }
        }
    }
    return 0;
}
