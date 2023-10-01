#include <bits/stdc++.h>
using namespace std;

bool ktra_lap(string s1, string s2){
	for(int i = 0; i <= s2.size() - s1.size(); i++){
		string sub = "";
		if(s2[i] == s1[0])
			for(int j = i; j < i + s1.size(); j++)
				sub += s2[j];
		if(sub == s1)
			return true;
	}
	
	return false;
}

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	if(ktra_lap(s1, s2))
		cout << "YES\n";
	else
		cout << "NO\n";
	
	char *res = strstr(s2.c_str(), s1.c_str()); 
	cout << res << endl;
	
}
/*
abcde
azhuywfjalzabcde
*/