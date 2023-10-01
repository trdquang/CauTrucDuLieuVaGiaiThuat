#include <bits/stdc++.h>
#include <vector>
using namespace std;

string cong_2_so(string a, string b){
	while(a.size() < b.size()) 	 a = "0" + a;
	while(b.size() < a.size())	 b = "0" + b;
	string res = "";
	
	int nho = 0;
	for(int i = a.size() - 1; i >=0; i--){
		int x = int(a[i] - '0') + int(b[i] - '0') + nho;
		res = char(x % 10 + '0') + res;
		nho = x/10;
	}
	if(nho > 0)
		res = char(nho + '0') + res;
	
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		cout << cong_2_so(s1, s2) << endl;
	}
}
/*
1
812317349123232323232323232323232323232318247124
12316237123333333333333333333331231

Out
812317349123244639469446565656565656565651578355
*/