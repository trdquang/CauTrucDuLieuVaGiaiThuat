#include <iostream>

using namespace std;

int a[100], n, k;

void sinh_th(int i){
//	cout <<"De qui bit thu " << i << endl;
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
//		cout << "Gan cho bit thu " << i << " gia tri = " << j << endl;
		if(i == k){
			//result();
			for(int i = 1; i <= k; i++)
				cout << a[i];
			cout << endl;
//			cout << "Quay lui song voi nhanh thu " << i << endl;
		}
		else
			sinh_th(i + 1);
	}	
}

int main(){
	cin >> n >> k;
	a[0] = 0;
	sinh_th(1);
}