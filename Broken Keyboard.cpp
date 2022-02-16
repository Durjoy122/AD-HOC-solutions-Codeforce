#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if(n == 1) {
        cout <<"0\n";
        exit(0);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }
    int cnt = 1;
    while(sum >= 10) {
        int r = 0;
        while(sum) {
            r += sum % 10;
            sum /= 10;
        }
        cnt++;
        sum = r;
    }
    cout << cnt <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
