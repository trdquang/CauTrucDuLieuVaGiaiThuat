#include <iostream>
using namespace std;

char path[100];

int n, cnt = 0, a[100][100], ok;

void back_track(int i, int j, int cnt){
	if(i == n && j == n){
		for(int i = 0; i < cnt ; i++){
			cout << path[i] << "";
		}
		cout << endl;
		//return;
	}
	
	if(i + 1 <= n && a[i + 1][j] == 1){
		path[cnt] ='D';
		a[i + 1][j] = 0;
		back_track(i + 1, j, cnt+ 1);
		a[i + 1][j] = 1;
	}
	
	if(j + 1 <= n && a[i][j + 1] == 1){
		path[cnt] = 'R';
		a[i][j + 1] = 0;
		back_track(i, j + 1, cnt + 1);
		a[i][j + 1] = 1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];
		}
		if(a[1][1] && a[n][n])
			back_track(1, 1, 1);
	}
}
/*
2 
4 
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1
5
1 0 0 0 0
1 1 1 1 1
1 1 0 0 1
0 1 1 1 1
0 0 0 1 1
*/