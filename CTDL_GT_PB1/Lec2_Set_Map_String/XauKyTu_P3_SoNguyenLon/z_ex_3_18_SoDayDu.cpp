#include <bits/stdc++.h>
#include <set>
using namespace std;

int ktra(string s){
	set<char> st;
	for(char c: s)
		st.insert(c);
	if(st.size() == 10)
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
		if(ktra(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}