#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0, fin = 0;
    for(int i = 0; i < n - 1; i++) {
        ans = 0;
        if(s[i] == '(') {
            if(s[i + 1] == ')') ans++;
            else break;
        }
        else if(s[i] == '{') {
            if(s[i + 1] == '{') ans++;
            else break;
        }
        else if(s[i] == '[') {
            if(s[i + 1] == ']') ans++;
            else break;
        }
        fin += ans;
    }
    int tt = fin + fin;
    stack <char> st;
    bool ok = true;
    int cnt = 0;
    for(auto u : s) {
        if(u == '{' || u == '[' || u == '(') st.push(u) , cnt++;
        else {
            if(st.empty()) {
                ok = false;
                break;
            }
            if(u == '}') {
                if(st.top() == '{') st.pop();
                else {
                   ok = false;
                   break;
                }
            }
            else if(u == ']') {
                if(st.top() == '[') st.pop();
                else {
                   ok = false;
                   break;
                }
            }
            else if(u == ')') {
                if(st.top() == '(') st.pop();
                else {
                  ok = false;
                  break;
                }
            }
        }
    }
    int tot = cnt + cnt;
    if(ok && !st.size()) cout << tot - fin <<"\n";
    else cout <<"0\n";
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
