#include <bits/stdc++.h>
using namespace std;

int n, m , x, y;
vector<int>adj[1001];
bool used[1001];

void dfs(int u){
	used[u] = true;
	for(int it: adj[u]){
		if(!used[it])
			dfs(it);
	}
}

int main(){
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		memset(used, false, sizeof(used));
		used[i] = true;
		if(i == 1)
			dfs(2);
		else
			dfs(1);
		int ok = 1;
		for(int i = 1; i <= n; i++){
			if(used[i] == false){
				ok = 0;
				break;
			}
		}
		if(!ok)
			cout << i << " ";
	}
}
/*
5 5
1 2 1 3 2 3 2 5 3 4
*/