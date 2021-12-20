#include<bits/stdc++.h>
using namespace std;

void Solve() {
    int a , b , c ,d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c;
    if(sum == d) {
        cout <<"1\n";
    }
    else {
        if(sum % d == 0) {
            cout << sum / d <<'\n';
        }
        else {
            cout << (sum / d) + 1 <<'\n';
        }
    }
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin >> t;
   while(t--) {
       Solve();
   }
   return 0;
}
