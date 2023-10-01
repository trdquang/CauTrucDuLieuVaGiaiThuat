#include <bits/stdc++.h>
using namespace std;

int parent[1001];
int n, m, x, y;
int size[1001];

int find(int u){
//	while(u != parent[u])
//		u = parent[u];
//	return u;

	//nen duong
	if(u == parent[u])
		return u;
	return parent[u] = find(parent[u]);
}

bool Union(int x, int y){
	x = find(x);
	y = find(y);
//	if(x < y)
//		parent[y] = x;
//	else
//		parent[x] = y;
	
	//toi uu theo size
	if(x == y)
		return false;
	if(x != y){
		if(size(x) >= size(y)){
			parent[y] = x;
			size[x] += size[y];
		}else{
			parent[x] = y;
			size[y] += size[x];
		}
	}
	return true;
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		size[i] = 1;
	}
	
	while(m--){
		cin >> x >> y;
		Union(x, y);
	}
	
	cout << endl;
	
	for(int i = 1; i <= n; i++)
		cout << i << " " << parent[i] <<"\n";
}
/*
7 6
1 2
2 3
2 4
3 5
5 6
6 7
*/