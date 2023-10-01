#include <bits/stdc++.h>
using namespace std;

int dem(string s){
	int i;
	for(i = 0; i < s.size(); i++)
		if(s[i] == '8')
			break;
	return s.size() - i;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		if(dem(s) >= 11)
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}
/*
2
13
7818005553535
11
31415926535
*/