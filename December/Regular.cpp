#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;
        set <int> s;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        int cnt = 0 , sum = 0;
        for(int i = 0; ; i++) {
            int t = *s.begin();
            n--;
            cnt++;
            sum += t;
            if(sum >= m || n == 0) {
                if(sum > m) {
                    cnt--;
                    break;
                }
                else {
                    break;
                }
            }
            s.erase(t);
        }
        cout << cnt  <<"\n";
    }
    return 0;
}
