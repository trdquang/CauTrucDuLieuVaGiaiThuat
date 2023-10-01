#include <bits/stdc++.h>
using namespace std;

int ktra_so(string s){
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
		if(!(s[i] == '2' || s[i] == '3' || s[i] == '5'
				|| s[i] == '7'))
			return 0;
		sum += s[i] - '0';
	}
	if(sum % 10 != 0)
		return 0;
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