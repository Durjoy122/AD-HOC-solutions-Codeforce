#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int nm) {
  if (nm < 2) return false;
  for (ll i = 2; i * i <= nm; i++) {
    if (nm % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 3;
    int m = 3;
    char c[n][m];
    int cnt = 0;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           cin >> c[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        cnt = i;
        cnt++;
        for(int j = 0; j < m; j++) {
            if(c[j][i] == '*') {
               v.push_back(cnt);
            }
            else {
                continue;
            }
            cnt += 3;
        }
        cnt = 0;
    }
    int x;
    cin >> x;
    int sum = 0 , t = v.size();
    for(int i = 0; i < t; i++) {
        sum += v[i] *pow(10, t - i- 1);
    }
    if(isPrime(sum)) {
       cout << sum <<"\n";
    }
    else {
        cout <<":-(\n";
    }
    return 0;
}
