#include <bits/stdc++.h>
#include <vector>
using namespace std;

int visited[1001];
int parent[1001];

bool dfs(int u){
	visited[u] = true;
	for(int x: adj[u]){
		if(visited[x]){
			if(x != parent[u])
				return true;
		}else{
			parent[x] = u;
			if(dfs(x))
				return true;
		}
	}
	return false;
}