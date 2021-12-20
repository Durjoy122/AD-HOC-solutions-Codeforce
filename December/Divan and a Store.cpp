#include<bits/stdc++.h>
using namespace std;

#define ll  long long
pair<int, int> v[1000];

void solve() {
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    vector <int> v(a) , t;
    for(int i = 0; i < a; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 0; i < a; i++) {
        if(v[i] >= b && v[i] <= c) {
            t.push_back(v[i]);
        }
        else {
            continue;
        }
    }
    sort(t.begin() , t.end());
    int sum = 0;
    for(int i = 0; i < t.size(); i++) {
        sum += t[i];
        if(sum <= d) {
            cnt++;
        }
        else {
            break;
        }
    }
    cout << cnt <<"\n";
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
