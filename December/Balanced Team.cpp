#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v , v + n);
    int mx = 0 , ans = 0;
    for(int i = 0; i < n; i++) {
       while(ans < n and v[ans] - v[i] <= 5) {
           ans++;
           mx = max(mx , ans - i);
       }
    }
    cout << mx <<'\n';
    return 0;
}
