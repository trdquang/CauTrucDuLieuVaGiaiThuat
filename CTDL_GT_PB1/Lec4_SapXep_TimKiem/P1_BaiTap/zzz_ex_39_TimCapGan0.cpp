#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b){
	if(abs(a.first) != abs(b.first))
		return abs(a.first) < abs(b.first);
	return a.second < b.second;
}

void tim_cap_gan_0(){
	int n;
	cin >> n;
	vector<pair<int, int>>v(n);
	/*
	Tao mang pair luu gia tri cua second: la gia tri mang
	Luu gia tri cua first: La gia chi cua chi so
	*/
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v[i].first = x;
		v[i].second = i;
	}
	
	sort(v.begin(), v.end(), cmp);
	long long res, sum = INT_MAX;
	int idx, idx2;
	for(int i = 1; i < n; i++){
		int tmp = abs(v[i].first + v[i - 1].first);
		if(tmp < sum){
			sum = tmp;
			res = v[i].first + v[i - 1].first;
			idx = min(v[i].second, v[i - 1].second);
			idx2 = max(v[i].second, v[i - 1].second);
		}else if(tmp == sum){
			if(idx > min(v[i].second, v[i - 1].second)){
				res = v[i].first + v[i - 1].first;
				idx = min(v[i].second, v[i - 1].second);
				idx2 = max(v[i].second, v[i - 1].second);
			}
		}
	}
	cout <<"id = " << idx <<" " << idx2 << endl;
	cout << "res = " << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		tim_cap_gan_0();
	}
}
/*
2 
3
-8 -66 -60
6
-21 -67 -37 -18 4 -65
*/