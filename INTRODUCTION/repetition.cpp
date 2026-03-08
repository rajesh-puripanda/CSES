#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.length();
	int block = 0;
	int answer = 0;
	// here, add a char to the end of the string, s+="#";
	// this is called a SENTINEL VALUE
	for(int i=0; i<n;i++){
			if (i!=0 && s[i]==s[i-1]){
					block+=1;
				}
				else{
					answer=max(answer,block);
					// HERE WHATS HAPPENING, IS ITS ONLY CHANGING IF IT SEES A MAX, OR IF THERES A CHANGE, SO AAAAAAAA doesnt work
					// simple fix, either add a char to the last
					
					
					
					
					block=1;
				}
				
				
		}
		// or just compute another answer, at the very end
		answer=max(answer,block);
		cout << answer << "\n";
}
	
