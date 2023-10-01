#include <bits/stdc++.h>
using namespace std;

vector<int>v[1001];
bool used [1001];
int n, m;

void dfs(int u){
	cout << u << " ";
	used[u] = true;
	for(int x: v[u]){
		if(used[x] == false){
			dfs(x);
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1);
}
/*
7 6 
1 2
2 3
2 4
2 7
3 5
3 6
*/