#include <iostream>
using namespace std;

int n, a[100][100];

void back_track(int i, int j){
	
	if(i <= n){
		if(i == 1)
			for(int i = 1; i <= n; i++)
				a[1][i] = i;
		else
			for(int j = 1; j <= n - i + 1; j++)
				a[i][j] = a[i-1][j] + a[i-1][j+1];
		
		back_track(i + 1, j);
		
	}
	
	if(i == n && j == n - i + 1){
		for(int i1 = n; i1 >= 1; i1--){
			for(int j1 = 1; j1 <= n - i1 + 1; j1++)
				cout << a[i1][j1] << " ";
			cout << endl;
		}
	}
}

int main(){
	cin >> n;
	
	back_track(1, 1);
}