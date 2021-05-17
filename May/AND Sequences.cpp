#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*[💭] [💡] [🎈] */

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
        int t = 0 , x = n - 1 , temp = 0;
        while(t <= x) {
            if(!temp) {
               cout << v[t++] <<" ";
               temp++;
            }
            else {
                cout << v[x--] <<" ";
                temp = 0;
            }
        }
        cout <<"\n";
    }
    return 0;
}

