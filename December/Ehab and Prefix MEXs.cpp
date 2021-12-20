#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void solve() {
    int n;
    cin >> n;
    vector <int> v(n) , t;
    int mx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max (mx , v[i]);
    }
    int temp = 0;
    t.push_back(abs(v[0] - v[1]));
    for(int i = 1; i < n; i++) {
        t.push_back(v[i] - v[i - 1]);
    }
    for(auto&it : t) {
        cout <<it <<" ";
    }
    cout <<"\n";
    set <int> s;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(v[i] == t[j]) {
               s.insert(v[i]);
            }
            else {
               continue;
            }
        }
    }
    vector <int> a , l;
    while(!s.empty()) {
        int emp = *s.begin();
        a.push_back(emp);
        s.erase(emp);
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == t[i]) {
           l.push_back(a[i] + mx);
        }
        else {
           l.push_back(t[i] + mx);
        }
    }
    for(auto&it : l) {
        cout << it <<" ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
