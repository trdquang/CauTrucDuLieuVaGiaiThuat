#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int>adj[1001];
int parent[1001];
int n, m, x, y, s, e;

void dfs(int u){
	used[u] = true;
	for(int it: adj[u]){
		if(used[it] == false){
			parent[it] = u;
			dfs(it);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(used, false, sizeof(used));
		cin >> n >> m >> s >> e;
		while(m--){
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		dfs(s);
		if(used[e] == false){
			cout << "-1\n";
		}else{
			vector<int>path;
			while(e != s){
				path.push_back(e);
				e = parent[e];
			}
			path.push_back(e);
			
			for(int i = path.size() - 1; i >= 0; i--)
				cout << path[i] << " ";
			cout << endl;
		}
	}
}
/*
1
6 9 1 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
*/