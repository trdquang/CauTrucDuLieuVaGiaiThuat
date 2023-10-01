#include <bits/stdc++.h>
using namespace std;

bool ktra_bien_tang(string s){
	if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
		return true;
		
	int lp = 1, tn = 1;
	for(int i = 0; i < s.size() - 1; i++){
		if(s[i] >= s[i + 1])
			tn = 0;
		if(!(s[i] == '6' || s[i] == '8'))
		lp = 0;
	}
	if(lp == 1 || tn == 1)
		return true;
	return false;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int n = s.size();
		string ma = "";
		for(int i = s.size() - 1; i >= s.size() - 6; i--){
			if(s[i] != '.')
				ma = s[i] + ma;
		}
		if(ktra_bien_tang(ma))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
/*
7
29T1–123.45
29T1–555.55
29T1–222.33
29T1–686.88
29T1–123.33
29T1–555.54
29T1–606.88
*/