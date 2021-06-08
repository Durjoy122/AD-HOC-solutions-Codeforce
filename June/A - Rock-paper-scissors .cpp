#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    if(n == m) {
        cout << n <<"\n";
    }
    else {
        cout << 3 - n - m <<"\n";
    }
    return 0;
}
