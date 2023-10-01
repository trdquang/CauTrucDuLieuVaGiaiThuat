#include <bits/stdc++.h>
using namespace std;

int ktra_so(string s){
	if( (s[s.size()-1] - '0')%2 !=0 )
		return 0;
	int sum = 0;
	for(int i = 0; i < s.size(); i++)
		sum += s[i] - '0';
	if(sum % 3 != 0)
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
2
18
3333333399999993333333333333333333333333333333333333222
*/