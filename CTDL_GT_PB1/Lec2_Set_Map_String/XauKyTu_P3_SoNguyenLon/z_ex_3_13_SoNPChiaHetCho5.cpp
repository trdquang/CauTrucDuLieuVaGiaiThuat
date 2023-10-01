#include <bits/stdc++.h>
using namespace std;

int ktra (string s){
	int res = 0, mu = 1;
	for(int i= s.size() - 1; i >= 0; i--){
		res += (s[i] - '0') * mu;
		mu *= 2;
		mu %= 10;
		res %= 10;
	}
	return (res % 5 == 0);
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(ktra(s))
			cout << "YES\n";
		else
			cout <<"NO\n";
	}
}
/*
2
111
0001101110100100101111000011111011000010010101111011010011110011
*/