#include<bits/stdc++.h>
using namespace std;

int fun(int n) {
    string s;
    s = to_string(n);
    int ans = 0;
    for(auto it : s) {
        if(it != '0') {
           ans = ans * 10 + it - '0'; // avoid 0 ---> 3007 to 37
        }
    }
    return ans;
}

void solve() {
    int x , y;
    cin >> x >> y;
    int sum = x + y;
    if(fun(x) + fun(y) == fun(sum)) {
        cout <<"YES\n";
    }
    else {
        cout <<"NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
