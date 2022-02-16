#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 2e5 + 10;

int s[MAXN];

void solve() {
    int n , m;
    cin >> n >> m;
    vector <int> v(n) , t(n);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++) {
        cin >> t[i];
    }
    int sum = 0 , temp = 0;
    for(int i = 1; i <= n; i++) {
        if(t[i]) {
            sum += v[i];
            v[i] = 0;
        }
        s[i] += s[i - 1] + v[i];
    }
    int ans = 0;
    for(int i = 1; i <= n + m - 1; i++) {
        ans = max(ans , s[i + m - 1] - s[i - 1]);
    }
    cout << sum + ans <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
