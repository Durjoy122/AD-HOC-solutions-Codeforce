#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0)  {
            v.push_back(i);
            if(i != n / i) {
                v.push_back(n / i);
            }
            else {
                continue;
            }
        }
        else {
            continue;
        }
    }
    sort(v.begin() , v.end());
    for(auto u : v){
        cout << u <<"\n";
    }
    return 0;
}
