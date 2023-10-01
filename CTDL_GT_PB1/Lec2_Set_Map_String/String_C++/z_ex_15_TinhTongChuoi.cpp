#include <bits/stdc++.h>
using namespace std;

int tinh_tong(string s){
	int res = 0, tmp = 0;
	s += 'a';
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			tmp = tmp * 10 + (s[i] - '0');
		}else{
			res += tmp;
			tmp = 0;
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
		getline(cin, s);
		cout << tinh_tong(s) << endl;
	}
}