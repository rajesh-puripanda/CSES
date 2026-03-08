#include <bits/stdc++.h>
using namespace std;

int n;
int a[21];
long long answer= LONG_LONG_MAX; //basically infinity
void f(int i, long long diff){
	if (i==n){
		answer = min(answer, abs(diff));
		return;
	}
	
	f(i+1, diff + a[i]);
	f(i+1, diff - a[i]);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	// Based on constraints: 
	// CPU can do ~ 10^8 = 100,000,000 operations per second
	
	// N <= 5000 -> O(N^2)
	// N <= 20 -> 0(2^N)
	
	cin>>n;
	for(int i=0; i < n; i++){
		cin>>a[i];
	}
	f(0,0);
	//f(next index, sum of first set, sum of second set);
	cout << answer << "\n";
	
}

