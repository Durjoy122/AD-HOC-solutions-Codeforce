#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t;
    for(int i = 0; i < 1e5; i++) {
        t += "xxo";
    }
    if(t.find(s) != string::npos) { // check it's here or not if here then 1 otherwise 0
        cout <<"Yes\n";
    }
    else {
        cout <<"No\n";
    }
    return 0;
}
