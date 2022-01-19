#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s; // 12345
    vector <int> v(10);
    for(int i = 1; i <= 9; i++) {
        cin >> v[i];
    }
    bool ok = false;
    for(auto&it : s) {
        auto x = it - '0'; // 1 , 2 , 3 , 4 , 5
        if(x == v[x]) {
            continue;
        }
        else if(x > v[x] && ok) {
            break;
        }
        else if(x < v[x]) {
            ok = true;
            it = v[x] + '0';
        }
    }
    cout << s <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
