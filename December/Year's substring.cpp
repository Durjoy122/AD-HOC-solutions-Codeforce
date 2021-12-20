#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;
pair<int, int> v[1000];

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string Durjoy = "2020";
    while(s.size() > 0 && Durjoy.size() > 0) {
        if(s[0] == Durjoy[0]) {
            s.erase(s.begin());
            Durjoy.erase(Durjoy.begin());
        }
        else {
            break;
        }
    }
    while(s.size() > 0 && Durjoy.size() > 0) {
        if(s.back() == Durjoy.back()) {
           s.pop_back();
           Durjoy.pop_back();
        }
        else {
            break;
        }
    }
    if(Durjoy.empty()) {
        cout <<"YES\n";
    }
    else {
        cout <<"NO\n";
    }
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
