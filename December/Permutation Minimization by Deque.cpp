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
        deque <int> Q;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] < Q[0]) {
                Q.push_front(v[i]);
            }
            else {
                Q.push_back(v[i]);
            }
        }
        for(auto&it : Q) {
            cout << it <<" ";
        }
        cout <<"\n";
    }
    return 0;
}
