#include<bits/stdc++.h>
using namespace std;

#define ll  long long
const int N = 2e5 + 10;

void solve() {
    int n;
    cin >> n;
    vector <int> v(n) , t(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }
    vector <int> s;
    for(int i = 0; i < n; i++) {
        if(!t[i]) {
            s.push_back(v[i]);
        }
        else {
            continue;
        }
    }
    sort(s.begin() , s.end());
    for(int i = 0; i < n; i++) {
        if(!t[i]) {
            v[i] = s.back();
            s.pop_back();
        }
        else {
            continue;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << v[i] <<" ";
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
