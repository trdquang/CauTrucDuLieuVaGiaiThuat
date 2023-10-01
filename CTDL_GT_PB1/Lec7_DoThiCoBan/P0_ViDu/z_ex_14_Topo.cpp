#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int>adj[1001];
vector<int>topo;
int n, m, x, y;

void dfs(int u){
	used[u] = true;
	for(int it: adj[u]){
		if(!used[it])
			dfs(it);
	}
	topo.push_back(u);
}

int main(){
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		adj[x].push_back(y);
	}
	dfs(1);
	reverse(topo.begin(), topo.end());
	for(int it: topo)
		cout << it <<" ";
}
/*
6 5
1 2
2 3
2 4
1 5
3 6
*/