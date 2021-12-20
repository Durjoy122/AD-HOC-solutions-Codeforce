#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void solve() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(__gcd(v[i] , 2 * v[j]) > 1) {
                cnt++;
            }
            else {
                if(v[i] % 2 != 0 && v[j] % 2 == 0) {
                    cnt++;
                }
            }
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
