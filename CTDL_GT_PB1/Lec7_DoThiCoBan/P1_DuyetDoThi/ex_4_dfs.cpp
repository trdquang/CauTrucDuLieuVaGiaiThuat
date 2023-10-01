#include <bits/stdc++.h>
using namespace std;

vector<int>a[1001];
int n, m, k;
bool used[1001];

void dfs(int u){
	cout << u << " ";
	used[u] = true;
	for(int it: a[u])
		if(used[it] == false)
			dfs(it);
}

int main(){
	cin >> n >> m >> k;
	while(m--){
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(used, false, sizeof(used));
	dfs(k);
}
/*
6 9 5
1 2
1 3
2 3
2 4
3 4
3 5
4 5
4 6
5 6
*/