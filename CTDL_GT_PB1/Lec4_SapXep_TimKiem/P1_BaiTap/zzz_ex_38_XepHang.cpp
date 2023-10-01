#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	pair<int, int>p[n];
	for(int i = 0; i < n; i++){
		cin >> p[i].first;
		cin >> p[i].second;
	}
	
	sort(p, p + n);
	int end_time = -1;
	
	for(int i = 0; i < n; i++){
		end_time = max(end_time, p[i].first);
		end_time += p[i].second;
	}
	
	cout << end_time;
}