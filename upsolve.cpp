#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string st = s;
    sort(st.begin() , st.end());
    vector <int> v;
    for(int i = 0; i < n; i++) {
        if(s[i] != st[i]) v.push_back(i + 1);
        else continue;
    }
    if(v.size() == 0) cout <<"0\n";
    else {
        cout <<"1\n";
        cout << v.size() <<" ";
        for(auto u : v) cout << u <<" ";
        cout <<"\n";
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
