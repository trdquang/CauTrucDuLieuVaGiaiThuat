#include <bits/stdc++.h>
using namespace std;

bool used[100];
vector<int>v[1001];
int n, m, s, e;

void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int it: v[t]){
			if(used[it] == false){
				q.push(it);
				used[it] = true;
			}
		}
	}
}

int main(){
	cin >> n >> m ;
	int x, y;
	while(m--){
		cin >> x >> y;
		v[x].push_back(y);
	}
	
	int t;
	cin >> t;
	while(t--){
		memset(used, false, sizeof(used));
		cin >> s >> e;
		bfs(s);
		if(used[e] == false)
			cout <<"NO\n";
		else
			cout <<"YES\n";
	}
}
/*
6 5
1 2
2 3
3 4
1 4
5 6
2
1 5
2 4
*/