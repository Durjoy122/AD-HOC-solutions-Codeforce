#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;
pair<int, int> v[1000];

void solve() {
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != '0') {
            cnt++;
        }
        else {
            continue;
        }
    }
    cout << cnt <<"\n";
    int ok = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != '0') {
            cout << s[i];
            ok = 1;
        }
        for(int j = i + 1; j < s.size(); j++) {
            if(ok == 1) {
                cout <<"0";
            }
            else {
                continue;
            }
        }
        cout <<"";
        ok = 0;
    }
    cout <<"\n";
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
