#include <bits/stdc++.h>
using namespace std;

vector<int>adj[1001];
vector<int>topo;
int degree[1001] = {0};
int n, m, x, y;

void kahn(){
	queue<int>q;
	for(int i = 1; i <= n; i++){
		if(degree[i] == 0)
			q.push(i);
	}
	
	while(!q.empty()){
		int v = q.front();
		q.pop();
		topo.push_back(v);
		for(int it: adj[v]){
			degree[it]--;
			if(degree[it] == 0)
				q.push(it);
		}
	}
}

int main(){
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		adj[x].push_back(y);
		degree[y]++;
	}
	kahn();
	for(int it: topo)
		cout << it << " ";
}
/*
7 7
1 2
1 5
2 3
2 4
3 6
4 6
7 6
*/