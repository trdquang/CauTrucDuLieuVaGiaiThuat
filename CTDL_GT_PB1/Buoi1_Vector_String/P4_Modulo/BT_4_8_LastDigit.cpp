#include<bits/stdc++.h>
using namespace std;

int so_tan_cung(int n){
	int r = n % 4;
	if(n == 0)
		return 6;
	if(n == 1)
		return 8;
	if(n == 2)
		return 4;
	if(n == 3)
		return 2;
	
}

int main(){
	int n;
	cin >> n;
	cout << so_tan_cung(n);
}