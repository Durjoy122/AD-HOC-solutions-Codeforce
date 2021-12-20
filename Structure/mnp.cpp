#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int v[3];
    cin >> v[0] >> v[1] >> v[2];
    sort(v , v + 3);
    cout << v[1] + v[2] <<'\n';
    return 0;
}
