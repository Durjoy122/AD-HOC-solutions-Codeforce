#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for(int i = 0; i < n; i = i + 2) {
            if(v[i] > v[i + 1]) {
                swap(v[i] , v[i + 1]);
            }
        }
        for(auto&it : v) {
            cout << it <<" ";
        }
        cout <<"\n";
    }
    return 0;
}
