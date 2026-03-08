#include <bits/stdc++.h>
using namespace std;



void solve(int n, int from, int to){
	if (n==0){
		return;
	}; // base case
	int OTHER = 1+2+3 - to - from;
	// int OTHER = FROM ^ TO;
	
	solve(n-1, from, OTHER);
	cout << from << " " << to << "\n";
	// push_back() for single elements
	// emplace_back() for pairs
	solve(n-1, OTHER, to);
};

int main(){
	int n;
	cin>>n;
	cout << (1<< n) -1 << "\n"; // 2^N - 1
	solve(n,1,3);
}

