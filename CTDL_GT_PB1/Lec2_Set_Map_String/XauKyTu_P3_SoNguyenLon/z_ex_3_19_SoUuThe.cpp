#include <bits/stdc++.h>
using namespace std;

int ktra(string s){
	if(s[0] == '0')
		return 0;
	
	int c = 0, l = 0;
	for(int i = 0; i < s.size(); i++){
		if(!isdigit(s[i]))
			return 0;
		else{
			if((s[i] - '0')%2 == 0)
				c++;
			else
				l++;
		}
	}
	
	if( (s[s.size()-1]-'0')%2 == 0 && c>l)
		return 1;
	if( (s[s.size()-1]-'0')%2 != 0 && l>c)
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
			cout << "-1\n";
	}
}