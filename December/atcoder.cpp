#include<bits/stdc++.h>
using namespace std;

#define ll  long long
const int N = 2e5 + 10;

void solve() {
    string t , s;
    cin >> t >> s;
    string c , v;
    c = t;
    v = s;
    int ans = 0;
    sort(c.begin() , c.end());
    sort(v.begin() , v.end());
    for(int i = 0; i < v.size(); i++) {
        if(c[i] == v[i]) {
            ans++;
        }
        else {
            continue;
        }
    }
    string cc;
    if(ans == t.size()) {
        int tt = 0;
        for(int i = 0; i < t.size(); i++) {
            if(s[i] != t[i]) {
                tt++;
                cc.push_back(t[i]);
                cc.push_back(s[i]);
            }
            else {
                continue;
            }
        }
        if(tt == t.size()) {
            bool ok = false;
            int temp = 0;
            for(int i = 0; i < cc.size(); i++) {
                for(int j = i + 1; i < cc.size(); j++) {
                    if(s[i] == s[j]) {
                        temp = j;
                        break;
                    }
                }
                if(temp - i == 2) {
                    ok = true;
                    break;
                }
            }
            if(ok) {
                cout <<"No\n";
            }
            else {
                cout <<"Yes\n";
            }
        }
    }
    else {
        cout <<"No\n";
    }
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   solve();
   return 0;
}
