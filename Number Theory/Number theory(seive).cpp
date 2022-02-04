#include<bits/stdc++.h>
using namespace std;

#define M 1000000
bool marked[M];
vector<long long>prime;

int main() {
    marked[0] = marked[1] = false;
    for(int i = 2;i < M; i++){
       marked[i] = true;
    }
    for (int i = 2; i <= sqrt(M); i++) {
      if (marked[i] == true) { // i is a prime
          for (int j = i * i; j <= M; j += i) {
               marked[j] = false;
          }
       }
    }
    int n;
    cin >> n;
    vector<long long>prime;
    for(int i = 2; i < n; i++) {
        if(marked[i]) {
            prime.push_back(i);
        }
        else {
            continue;
        }
    }
    for(auto&it : prime) {
        cout << it <<" ";
    }
    return 0;
}

