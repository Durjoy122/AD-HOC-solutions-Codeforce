#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        vector <int> v(k);
        for(auto&it : v) {
            cin >> it;
        }
        sort(v.rbegin() , v.rend());
        int temp = 0 , tot = 0;
        while(temp < k && tot + n - v[temp] < n) {
            tot += n - v[temp++];
        }
        cout << temp <<"\n";
    }
    return 0;
}
