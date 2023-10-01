#include <bits/stdc++.h>
using namespace std;

int ktra_cs(string s){
	int num;
	if(s.size() == 1)
		num = s[s.size() - 1] - '0';
	else
		num = (s[s.size() - 2] - '0') * 10 + s[s.size() - 1] - '0';
	if(num % 25 == 0)
		return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(ktra_cs(s))
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}
/*
2
18
18283128381238182812481248182480912481284812412841824875
*/