#include<bits/stdc++.h>
using namespace std;

void solve() {
    vector <int> v(7) , k;
    int mx = 0;
    for(int i = 0; i < 7; i++) {
        cin >> v[i];
        mx = max(mx , v[i]);
    }
    sort(v.begin() , v.end());
    for(int i = 0; i < v.size() - 1; i++) {
        if(v[i] != v[i + 1]) {
            k.push_back(v[i]);
        }
        else {
            continue;
        }
    }
    if(v[v.size() - 1] == v[v.size() - 2]) {
        k.push_back(v[v.size() - 2]);
    }
    else {
        k.push_back(v[v.size() - 1]);
    }
    if(v.size() == 3) {
        for(auto&it : v) {
            cout << it <<" ";
        }
        cout <<"\n";
    }
    else {
        cout <<k[0] <<" "<< k[1] <<" "<< mx - k[0] <<"\n";
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
