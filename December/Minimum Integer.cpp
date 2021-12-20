#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n , m , t;
    cin >> n >> m >> t;
    if(n > t) {
        cout << t <<"\n";
    }
    else {
        cout << (m / t + 1) * t<<"\n";
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
