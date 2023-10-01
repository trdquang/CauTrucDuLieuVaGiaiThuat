#include <bits/stdc++.h>
using namespace std;

int ktra (string s){
	if(s.size() == 1)
		s = "0" + s;
	int x = (s[s.size()-2] - '0') * 10;
	x += (int)( s[s.size() - 1] - '0');
	return (x%4==0);
	
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	string s;
	while(t--){
		cin >> s;
		if(ktra(s)){
			cout << 4 << endl;
		}else
			cout << 0 << endl;
	}
}