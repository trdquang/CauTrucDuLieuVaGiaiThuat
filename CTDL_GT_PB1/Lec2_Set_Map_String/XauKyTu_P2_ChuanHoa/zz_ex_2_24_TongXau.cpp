#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int sum = 0, res = 0;
		for(int i = 0; i < s.size(); i++){
			if(isdigit(s[i])){
				res = res * 10 + s[i] - '0';
			}else{
				sum += res;
				res = 0;
			}
		}
		sum += res;
		cout << sum << endl;
	}
}
/*
3
1abc23
1abc2x30yz67
123abc
*/