#include <bits/stdc++.h>
using namespace std;

int dem_xau_con(string s, int k){
	int res = 0;
	int cnt[256] = {0};
	for(int i = 0; i < s.size(); i++){
		memset(cnt, 0, sizeof(cnt));
		int dem = 0;
		for(int j = i; j < s.size(); j++){
			if(cnt[s[j]] == 0)
				dem ++;
			if(dem == k)
				res ++;
			if(dem > k)
				break;
			cnt[s[j]]++;
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
		int k;
		cin >> s >> k;
		cout << dem_xau_con(s, k) << endl;
	}
}