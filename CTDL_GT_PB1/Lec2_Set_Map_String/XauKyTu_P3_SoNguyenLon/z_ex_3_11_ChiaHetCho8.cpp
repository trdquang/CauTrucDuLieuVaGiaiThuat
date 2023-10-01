#include <bits/stdc++.h>
using namespace std;

int ktra_so(string s){
	while(s.size() < 3)
		s = "0" + s;
	
	int kt = s.size();
	int sum = (s[kt-3] - '0') * 100 + (s[kt-2] - '0') * 10
			+(s[kt - 1] - '0');
	return (sum % 8 == 0);
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
/*
2
16
12381289471245812581251275129581258128512851825182541257800
*/