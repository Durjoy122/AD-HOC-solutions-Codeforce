#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
        int a , b;
        cin >> a >> b;
        v[i] = {a , b};
    }
    int res = 1e9;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << v[j].second <<" ";
            if(i == j) {
                res = min(res , v[i].first + v[j].second);
            }
            else {
                res = min(res , max(v[i].first , v[j].second));
            }
        }
        cout <<"\n";
    }
    cout << res <<"\n";
    return 0;
}

/*
3
8 5
4 4
7 9
*/
