#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+100, M = 30;

int cnt[N][M];

void solve() {
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < M; j++) {
            cnt[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++) {
        cnt[i % k][s[i] - 'a']++;
    }
    int ans = 0;
    for(int i = 0; i < (k + 1) / 2; i++) {
        int tot[M] = {};
        int mr = k-i-1;
        for(int j = 0; j < M; j++) {
            tot[j] += cnt[i][j];
            if(mr != i) {
                tot[j] += cnt[mr][j];
            }
            else {
                continue;
            }
        }
        int sum = 0 , mx = -1;
        for(int j = 0; j < M; j++) {
            sum += tot[j];
            mx = max(mx , tot[j]);
        }
        ans += sum - mx;
    }
    cout << ans <<"\n";
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
