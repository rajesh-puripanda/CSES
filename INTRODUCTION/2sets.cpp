#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a,b;
	long long A=0, B= 0;
	for(int x=n; x>=1; --x){
			if (A>B){
					b.push_back(x);
					B+=x;
			}
			else{
				a.push_back(x);
				A+=x;
			}
	}
	
	if (A==B){
		cout << "YES \n";
		cout << a.size() << "\n";
		for (int x: a){
			cout << x << " ";
		}
		cout << "\n";
		cout << b.size() << "\n";
		for (int x: b){
			cout << x << " ";
		}
		cout << "\n";
		}
	else{
		cout << "NO \n";
		}

}
