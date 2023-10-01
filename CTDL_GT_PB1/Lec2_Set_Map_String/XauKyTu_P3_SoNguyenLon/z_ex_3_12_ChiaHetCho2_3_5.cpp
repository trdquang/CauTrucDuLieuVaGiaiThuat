#include <bits/stdc++.h>
using namespace std;

int ktra_so(string s){
	if(s[s.size() - 1] !='0')
		return 0;
	int sum = 0;
	for(char c: s)
		sum += c - '0';
	return (sum % 3 == 0);
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(ktra_so(s))
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}