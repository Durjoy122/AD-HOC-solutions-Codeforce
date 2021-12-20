#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;

void solve() {
    vector <int> v(2);
    for(int i = 0; i < 2; i++) {
        cin >> v[i];
    }
    int tot = 0;
    while(max(v[0] , v[1]) > 1 && min(v[0] , v[1]) > 0) {
        tot++;
        if(v[0] < v[1]) {
            v[0]++;
            v[1] -= 2;
        }
        else {
            v[1]++;
            v[0] -= 2;
        }
    }
    cout << tot <<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
