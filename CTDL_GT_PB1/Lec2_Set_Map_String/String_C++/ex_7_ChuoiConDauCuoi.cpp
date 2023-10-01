/*
So luong xau con bang so cac ky tu don le cong voi
to hop chap hai cua cac ky tu co co lan lap lon hon 2
*/

#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<char, int> mp;
		for(char c: s)
			mp[c]++;
		
		int cnt = s.size();
		for(auto it: mp){
			cnt += it.second * (it.second - 1)/2;
		}
		cout << cnt << endl;
	}
}