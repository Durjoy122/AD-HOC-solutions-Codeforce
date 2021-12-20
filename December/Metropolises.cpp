#include<bits/stdc++.h>
using namespace std;

#define ll  long long
const int N = 2e5 + 10;


void solve() {
   int n;
   cin >> n;
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
          if((i + j) % 2 != 0) {
              cout <<"B";
          }
          else {
              cout <<"W";
          }
      }
      cout <<"\n";
   }
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   solve();
   return 0;
}
