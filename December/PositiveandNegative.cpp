#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int t;
    scanf("%lld" ,&t);
    for(long long int i = 1; i <= t; i++){
        long long int a , b;
        scanf("%lld %lld" , &a , &b);
        printf("Case %lld: %lld\n", i, (a * b) / 2);
    }
    return 0;
}
