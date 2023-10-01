#include <bits/stdc++.h>
#include <vector>
using namespace std;

string so_ln(string x){
	string res = "";
	for(char c: x){
		if(c == '4'){
			res += "322";
		}else if(c == '6')
			res += 35;
		else if(c == '8')
			res += "2227";
		else if(c == '9')
			res += "3327";
		else if(c != '1' && c != '0')
			res += c;
	}
	sort(res.begin(), res.end(), greater<char>());
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string n, x;
		cin >> n >> x;
//		cout << "n = " << n << endl;
//		cout << "x = " << x << endl;
		cout << so_ln(x) << endl;
	}
}
/*
1
4 1234
*/