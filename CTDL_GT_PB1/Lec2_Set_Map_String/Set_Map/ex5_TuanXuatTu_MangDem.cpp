#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int a[30] = {0};
		for(int i = 0; i < s.size(); i++){
			a[s[i] - 'a']++;
		}
		
		char c = 'a';
		int max = -1;
		for(int i = 0; i < 30; i++){
			if(a[i] > max){
				max = a[i];
				c = char(i + 'a');
			}
		}
		cout << c<< endl;
	}
}