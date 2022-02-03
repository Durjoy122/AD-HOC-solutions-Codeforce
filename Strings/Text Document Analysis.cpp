#include<bits/stdc++.h>
using namespace std;

int ans = 0;

int rec(int x) {
    if(x == 1) {
       return 1;
    }
    int ans = rec(x - 1);
    cout << ans <<" "<< x <<"\n";
    return ans + x;

}

void solve() {
    int n;
    cin >> n;
    cout << rec(n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
