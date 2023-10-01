#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, cnt = 0;
bool used[1001];
vector<int> adj[1001];
int color[1001] = {0};

bool dfs(int u){
	color[u] = 1;
	for(int v: adj[u]){
		if(color[v] == 0){
			if(dfs(v))
				return true;
		}else if(color[v] == 1){
			return true;
		}
	}
	color[u] = 2;
	return false;
}

int main(){
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		adj[x].push_back(y);
	}
	
	int ok = 0;
	for(int i = 1; i <= n; i++){
		if(color[i] == 0){
			if(dfs(i)){
				ok = 1;
				break;
			}
		}
	}
	if(ok)
		cout <<"YES\n";
	else
		cout <<"NO\n";
}

/*
5 6
1 2
2 3
3 1
2 4
3 4
1 5
*/