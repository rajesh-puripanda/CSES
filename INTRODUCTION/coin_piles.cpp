#include <bits/stdc++.h>
using namespace std;

void test_case(){		
	int a, b;
	cin >> a >> b;
	if ((a+b)%3 ==0 && a <= 2*b && b <= 2*a){
		cout << "YES \n";
	} else{
		cout << "NO \n";
	}
		
		
}
int main(){
	int T;
	cin >> T;
	for(int rep=0; rep<T;rep++){
			test_case();
			
	}
}

