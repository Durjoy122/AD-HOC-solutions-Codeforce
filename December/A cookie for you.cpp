#include<bits/stdc++.h>
using namespace std;

#define ll  long long
const int N = 2e5 + 10;

void solve() {
    ll n;
    cin >> n;
    ll cnt = 0 , cnt2 = 0 , temp = 0 , temp2 = 0;
    for(int i = 0; i < n; i++) {
        ll v;
        cin >> v;
        if(v & 1) {
             cnt++;
             cnt2++;
        }
        else {
            cnt--;
            cnt2--;
        }
        if(i & 1) {
            cnt++;
            cnt2--;
        }
        else {
            cnt--;
            cnt2++;
        }
        temp += abs(cnt);
        temp2 += abs(cnt2);
    }
    ll temp3 = N;
    if(cnt == 0) {
        temp3 = min(temp3 , temp / 2);
    }
    if(cnt2 == 0) {
        temp3 = min(temp3 , temp2 / 2);
    }
    if(temp3 == N) {
        cout <<"-1\n";
    }
    else {
      cout << temp3 <<"\n";
    }
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   ll t;
   cin >> t;
   while(t--) {
     solve();
   }
   return 0;
}
