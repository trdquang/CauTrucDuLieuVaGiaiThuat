#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int ln = -1, res = 0;
		for(int i = 0; i < s.size(); i++){
			if(isdigit(s[i]))
				res = res * 10 + s[i] - '0';
			else{
				ln = max(ln, res);
				res = 0;
			}
		}
		ln = max(ln, res);
		cout << ln << endl;
	}
}
/*
3
100klh564abc365bg
abvhd9sdnkjdfs
abchsd0sdhs
*/