#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;   
    long long sum = 0;
    // 1....n
    for (int i = 0; i < n - 1; i++){
        int x;
        cin >> x;
        sum += x;
    }

        long long expected = (long long)n * (n + 1) / 2;
        cout << expected - sum << " ";
    }