#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

 void ans() {
    int n , k;
    cin >> n >> k;
    vector <int> v;
    while(k > 3) {
        v.push_back(1);
        n--;
        k--;
    }
    if(n & 1 == 1) {
        v.push_back(n / 2);
        v.push_back(n / 2);
        v.push_back(1);
    }
    else if(n % 4 == 0) {
        v.push_back(n / 2);
        v.push_back(n / 2);
        v.push_back(n / 4);
    }
    else {
        v.push_back(n / 2 - 1);
        v.push_back(n / 2 - 1);
        v.push_back(2);
    }
    for(auto&it : v) {
        cout << it <<" ";
    }
    cout <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
      ans();
    }
    return 0;
}
