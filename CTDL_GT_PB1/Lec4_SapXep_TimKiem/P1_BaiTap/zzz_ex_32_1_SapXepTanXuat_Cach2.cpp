#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;

map<int, int > mp;

bool cmp(int a, int b){
	if(mp[a] != mp[b]){
		return mp[a] > mp[b];
	}
	return a < b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		
		sort(a, a + n, cmp);
		for(int el: a)
			cout << el << " ";
		cout << endl;
		mp.clear();
	}
}