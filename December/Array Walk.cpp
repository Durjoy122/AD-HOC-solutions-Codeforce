#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void solve() {
    int n , m , k;
    cin >> n >> m >> k;
    vector <int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    cout << sum <<"\n";
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
