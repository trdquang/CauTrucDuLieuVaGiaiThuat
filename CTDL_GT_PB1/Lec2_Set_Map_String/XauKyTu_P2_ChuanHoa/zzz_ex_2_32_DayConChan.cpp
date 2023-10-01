#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, res = 0;
	cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		if((s[i] - '0') % 2 == 0){
			res += (i + 1);
		}
	}
	cout << res;
}


/*
4
1234
*/