#include <bits/stdc++.h>
using namespace std;

int n, m, u;
vector<int> adj[1001];
vector<pair<int, int>>tree;
bool used[1001];
int dem[1001];

void dfs(int u){
	used[u] = true;
	for(int v: adj[u]){
		dem[u] ++;
		if(!used[v]){
			tree.push_back({u, v});
			dfs(v);
		}
	}
}

int main(){
	cin >> n >> m;
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
	for(int i = 1; i <= n; i++){
		cout << i << " " << dem[i] << endl;
	}
}
/*
11 10
1 2
1 3
1 4
2 5
2 6
3 7
4 8
4 9
4 10
6 11
*/