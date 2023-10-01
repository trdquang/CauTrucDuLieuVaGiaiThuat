#include <bits/stdc++.h>
using namespace std;

int ktra_so(string s){
	int l = 0, r = s.size() - 1;
	while(l <= r){
		if(s[l] != s[r])
			return 0;
		if(!(s[l] == '2' || s[l] == '3' || s[l] == '5'
				|| s[l] == '7'))
			return 0;
		l++;
		r--;
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
		if(ktra_so(s))
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}
/*
3
55555555555555555555555555555555555555555555
235723572357235723572357235723572357235723573
2375757575772727272777288727272732737
*/