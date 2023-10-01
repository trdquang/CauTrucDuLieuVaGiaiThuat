#include <bits/stdc++.h>
#include <map>
using namespace std;

void tim_xau_con(string s){
	map<char, int> mp;
	char dem[256] = {0};
	
	for(char c: s)
		mp[c]++;
	int len = mp.size();
	
	int ans = INT_MAX, left = 0, cnt = 0, index = -1;
	
	for(int i = 0; i < s.size(); i++){
		dem[s[i]]++;
		if(dem[s[i]] ==1)	cnt++;
		
		if(cnt == len){
			while(dem[s[left]] > 1){
				dem[s[left]]--;
				left++;
			}
			ans = min(ans, i - left + 1);
			index = left;
		}
	}
	cout << ans << endl;
	cout << s.substr(index, ans) << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1;
		getline(cin, s1);
		tim_xau_con(s1);
	}
}
/*
2
aabcbcdbca
aaab
*/