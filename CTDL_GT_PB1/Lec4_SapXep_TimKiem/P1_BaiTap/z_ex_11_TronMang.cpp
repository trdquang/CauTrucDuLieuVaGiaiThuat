#include <bits/stdc++.h>
using namespace std;

void tron_mang(int b[], int c[], int n, int m){
	int i = 0, j = 0;
	while(i < n && j < m){
		if(b[i] < c[j]){
			cout <<"b" << (i + 1) << " ";
			i++;
		}else{
			cout <<"c" <<(j + 1) <<" ";
			j++;
		}
	}
	while(i < n){
		cout << "b" <<(i + 1) <<" ";
		i++;
	}
	while(j < m){
		cout << "c" <<(j + 1) <<" ";
		j++;
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	int b[n], c[m];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	for(int j = 0; j < m; j++)
		cin >> c[j];
	tron_mang(b, c, n, m);
}
/*
4 4
1 2 4 6
3 5 8 9
*/