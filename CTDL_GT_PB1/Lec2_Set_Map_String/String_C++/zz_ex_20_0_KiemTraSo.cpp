#include <bits/stdc++.h>
using namespace std;

string ktra_so(string s){
	set<char>st;
	for(char c: s){
		if(isdigit(c))
			st.insert(c);
		else
			return "INVALID";
	}
	if(st.size() == 10)
		return "YES";
	return "NO";
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		cout << ktra_so(s) << endl;
	}
}
/*
3
01234aa32432432432534545b987978
123444444444444566666666667890
324562783924723543243243242354354354333234324
*/
