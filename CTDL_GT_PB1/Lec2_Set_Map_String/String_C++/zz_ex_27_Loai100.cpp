#include <bits/stdc++.h>
using namespace std;

int loai_ln(string s){
	int res = 0;
	for(int i = 0; i < s.length() - 2; i++){
		if(s == "")
			break;
		if(s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0'){
			res += 3;
			s.erase(i, 3);
			i = 0;
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		cout << loai_ln(s) << endl;
	}
}