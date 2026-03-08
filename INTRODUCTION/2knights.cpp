#include <bits/stdc++.h>
using namespace std;

int main(){
		int max_n;
		cin >> max_n;
		
		for (long long n = 1; n<=max_n; n++){
			long long size = n * n;
			long long allWays = (size)*(size-1)/2;
			long long badways = 8 * (n - 4)*(n - 4);
			badways+= 6 * (n-4)*4;
			badways+= 4 * (n-3)*4;
			badways+= 3*8;
			badways+= 2*4;
			badways/=2;
			cout << allWays - badways << "\n";
			}

}
