#include <bits/stdc++.h>
using namespace std;

int n, m, u;
vector<int> adj[1001];
vector<pair<int, int>>tree;
bool used[1001];

void dfs(int u){
	used[u] = true;
	for(int v: adj[u]){
		if(!used[v]){
			tree.push_back({u, v});
			dfs(v);
		}
	}
}

int main(){
	cin >> n >> m >> u;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}	
	dfs(u);
	for(int i = 1; i <= n; i++){
		if(!used[i]){
			cout << "-1\n";
			return 0;
		}
	}
	cout << endl;
	for(auto it: tree){
		cout << it.first << " " << it.second << endl;
	}
}
/*
4 3 2
1 2
1 3
2 4
*/