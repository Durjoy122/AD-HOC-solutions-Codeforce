#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n , m , a , b;
    cin >> n >> m >> a >> b;
    int tot = 1 , temp = 1 , ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i == j) {
               if(i != n) {
                  temp = j;
                  tot = j;
                  cout << temp + 1 <<" "<< tot + 1 <<"\n";
               }
               else {
                  cout << "1" <<" "<<"1"<<"\n";
               }
            }
            else {
                cout << i <<" "<< j <<"\n";
            }
        }
    }
    cout <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
