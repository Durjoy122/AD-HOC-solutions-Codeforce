#include<bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int n = 4;
   int v[n + 1][n + 1];
   for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= i; j++) {
          cin >> v[i][j];
      }
   }
   for(int i = 1; i <= n; i++) {
      for(int k = n - i; k >= 0; k--) {
          cout << k <<" ";
      }
      for(int j = 1; j <= i; j++) {
          cout << "Y" <<" ";
      }

      cout <<"\n";
   }
   return 0;
}

/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
*/
