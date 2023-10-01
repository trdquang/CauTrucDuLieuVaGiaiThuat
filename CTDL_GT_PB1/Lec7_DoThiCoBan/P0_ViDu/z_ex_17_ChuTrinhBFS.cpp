#include <bits/stdc++.h>
#include <vector>
using namespace std;

int visited[1001];
int parent[1001];

bool bfs(int u){
	queue<int>q;
	q.push(u);
	visited[u] = true;
	
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x: adj[v]){
			if(visited[x]){
				if(x != parent[v])
					return true;
			}else{
				q.push(u);
				visited[u];
				parent[x] = v;
			}
		}
	}
}