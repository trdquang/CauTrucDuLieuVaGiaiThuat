#include <bits/stdc++.h>
using namespace std;

char c[100];
int a[100][100], n, m, k = 0;

void back_track(int i, int j, int cnt){
	if(i == m && j == n){
		for(int it = 0; it < k; i++)
			cout << c[it];
		cout << endl;
	}
	
	if(i + 1 <= m){
		c[k] = 'D';
 		back_track(i + 1, j, cnt+1);
	 
	}
	
	if(j + 1 <= m){
		c[k] = 'R';
 		back_track(i, j + 1, cnt+1);
		
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		k = 0;
		cin >> m >> n;
		for(int i = 1; i <= m; i++)
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];
		back_track(1, 1, 1);
	}
}
/*
2
2 3
1 2 3
4 5 6
2 2
1 2
3 4
*/