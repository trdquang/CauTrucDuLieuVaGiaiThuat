#include <bits/stdc++.h>
using namespace std;

int dem(string s){
	int l = 0, r = s.size() - 1;
	int cnt = 0;
	while(l < r){
		if(s[l]!=s[r])
			cnt++;
		l++;
		r--;
	}
	cnt += s.size()%2;
	return cnt;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(dem(s) == 1)
			cout <<"YES";
		else
			cout <<"NO";
		cout << endl;
	}
}