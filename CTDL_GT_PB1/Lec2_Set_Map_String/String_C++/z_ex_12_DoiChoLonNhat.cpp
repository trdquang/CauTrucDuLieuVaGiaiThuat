/*
Doi cho toi da 1 lan, 
tim so lon nhat ma nho hon chinh no

*/
#include <bits/stdc++.h>
using namespace std;

string tim_lon_nhat(string s){
	int i = s.length() - 2;
	while(i >= 0 && s[i] <= s[i + 1]){
		i --;
	}
	if(i == -1)
		return "-1";
	int j = s.length() - 2;
	while(s[i] <= s[j]){
		j --;
	}
	while(s[j] == s[j - 1])
		j--;
	swap(s[i], s[j]);
	return s;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		cout << tim_lon_nhat(s) << endl;
	}
}