#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int T = 0; T < t; ++T) {
	int n;
	cin >> n;
	vector<long long> mnr, mns;
	for(int i = 0; i < 2*n; ++i) {
	    int x, y;
	    cin >> x >> y;
	    if(x == 0) mnr.push_back(abs(y));
	    if(y == 0) mns.push_back(abs(x));
	}
	for(auto&it : mnr) {
        cout << it <<" ";
	}
	exit(0);
	sort(mnr.begin(), mnr.end());
	sort(mns.begin(), mns.end());
	double res = 0;
	for(int i = n-1; i >= 0; --i) {
        cout << mnr[i] <<" ";
	    res += sqrt(mnr[i]*mnr[i] + mns[i]*mns[i]);
    }
     //printf("%.15f\n", res);

   }
}

