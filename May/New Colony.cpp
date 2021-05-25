#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n , m;
    cin >> n >> m;
    vector <int> v(n);
    int tot = -1;
    for(auto&it : v) {
        cin >> it;
    }
    while(m--) {
        int i = 0;
        while(i + 1 < n) {
            if(v[i] < v[i + 1]) {
                v[i]++;
                tot = i + 1;
                break;
            }
            i++;
        }
        if(i == n - 1) {
            tot = -1;
            break;
        }
     }
     cout << tot <<"\n";
  }
    return 0;
}
