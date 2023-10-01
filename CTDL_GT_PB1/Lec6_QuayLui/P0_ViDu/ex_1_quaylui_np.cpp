#include <iostream>

using namespace std;

int a[100], n;

void sinh_np(int i){
	cout <<"De qui bit thu " << i << endl;
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		cout << "Gan cho bit thu " << i << " gia tri = " << j << endl;
		if(i == n){
			//result();
			for(int i = 1; i <= n; i++)
				cout << a[i];
			cout << endl;
			cout << "Quay lui song voi nhanh thu " << i << endl;
		}
		else
			sinh_np(i + 1);
	}	
}

int main(){
	cin >> n;
	sinh_np(1);
}