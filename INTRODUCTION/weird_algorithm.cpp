#include <bits/stdc++.h>
using namespace std;

// COLLATS CONJECTURE

int main(){
    long long n; //int - 10^9 ~ 2 billion, but not risking it
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n%2==0){
            n /= 2;
        }else{
            n = (3 * n) + 1;
        }
    }
    cout << "1\n";
}