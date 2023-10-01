#include <bits/stdc++.h>
using namespace std;

int k, n, m, x, y;
vector<int>adj[1001];
bool used[1001];
map<int, int>mp;

void dfs(int u){
	used[u] = true;
	//cout << "u = " << u << " ";
	mp[u]++;
	for(int it: adj[u]){
		if(used[it] == false)
			dfs(it);
	}	
}

int main(){
	cin >> k >> n >> m;
	int num = k;
	vector<int>v;
	while(k--){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	while(m--){
		cin >> x >> y;
		adj[x].push_back(y);
	}
	
	
	for(int it: v){
		memset(used, false, sizeof(used));
		dfs(it);
	 
	}
	cout <<"\nres = ";
	for(auto it: mp){
		if(it.second == num)
			cout << it.first << " ";
	}
}
/*
2 4 4
2 3
1 2
1 4
2 3
3 4
*/