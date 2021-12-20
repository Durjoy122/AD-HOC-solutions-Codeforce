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
        int v[100];
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = 0;
        vector <int> x;
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                x.push_back(1);
            }
            else {
                if(v[i] == 1) {
                    x.push_back(1);
                }
                else {
                    while(!x.empty() && (x.back() != v[i] - 1)) {
                        x.pop_back();
                    }
                    x.back() = v[i];
                }
            }
            for(int j = 0; j < x.size(); i++) {
                if(j > 0) {
                    cout <<".";
                }
                cout << x[j];
            }
            cout <<"\n";
        }
        x.clear();
    }
    return 0;
}
