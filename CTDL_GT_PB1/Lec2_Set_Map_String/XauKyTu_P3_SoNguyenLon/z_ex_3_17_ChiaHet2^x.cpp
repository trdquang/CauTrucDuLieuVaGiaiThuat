#include <bits/stdc++.h>
using namespace std;

int ktra(string s, int x){
	int cnt = 0;
	for(int i = s.size() - 1; i >= 0; i--){
		if(cnt == x)
			break;
		if(s[i] == '1')
			return 0;
		cnt++;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		int x;
		cin	>> s >> x;
		cin.ignore();
		if(ktra(s, x))
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}