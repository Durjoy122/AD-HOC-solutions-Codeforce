#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void solve() {
    int n , m , k;
    cin >> n >> m >> k;
    vector <int> v(n);
    v[0] = m;
    int ind = n;
    for(int i = 1; i < n / 2; i++) {
        if(ind == k) {
            ind--;
        }
        v[i] = ind;
        ind--;
    }
    for(auto&it : v) {
        cout << it <<" ";
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
