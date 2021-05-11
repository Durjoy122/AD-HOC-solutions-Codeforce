#include<bits/stdc++.h>
using namespace std;

struct student {
   int name[50];
};

struct node {
   int x;
   int y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    struct student t;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> t.name[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += t.name[i];
    }
    cout << sum <<"\n";


    vector <node> v;
    for(int i = 0; i < n; i++) {
        int a , b;
        cin >> a >> b;
        v.push_back({a , b});
    }

    for(int i = 0; i < n; i++) {
        cout << v[i].x <<"\n";
        cout << v[i].y <<"\n";
    }
    return 0;
}
