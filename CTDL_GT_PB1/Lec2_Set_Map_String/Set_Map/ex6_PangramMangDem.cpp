#include <bits/stdc++.h>
using namespace std;

int ktra(int a[]){
	for(int i = 0; i < 26; i++){
		if(a[i] == 0)
			return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int a[26] = {0};
		for(int i = 0; i < s.size(); i++){
			a[tolower(s[i]) - 'a'] ++;
//			printf("%c ", tolower(s[i]));
		}
		if(ktra(a))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}