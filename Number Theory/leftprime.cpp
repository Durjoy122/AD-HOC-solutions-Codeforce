#include<bits/stdc++.h>
using namespace std;

#define M 1000000
bool marked[M];
vector<long long>prime;

void solve() {
    marked[0] = marked[1] = false;
    for(int i = 2; i < M; i++){
       marked[i] = true;
    }
    for (int i = 2; i <= sqrt(M); i++) {
      if (marked[i] == true) { // i is a prime
          for (int j = i * i; j <= M; j += i) {
               marked[j] = false;
          }
       }
    }
    long long n;
    cin >> n;
    vector<long long>prime;
    long long cnt = 0 , temp = n;
    for(int i = n; i >= 2; i--) {
        if(i == temp) {
           continue;
        }
        if(marked[i]) {
           cnt++;
        }
        else {
            continue;
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
