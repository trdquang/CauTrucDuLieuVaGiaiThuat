#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, cnt = 0;
bool used[1001];
vector<int> adj[1001];
map<int, int>mp;

void dfs(int u){
	used[u] = true;
	mp[u] = cnt;
	for(int it: adj[u]){
		if(used[it] == false)
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
		if(used[i] == false){
			cnt ++;
			dfs(i);
		}
	}
	
	for(int i = 1; i <= n; i++)
		cout << mp[i] << " ";
}
/*
6 3
1 2
1 3
4 5
*/