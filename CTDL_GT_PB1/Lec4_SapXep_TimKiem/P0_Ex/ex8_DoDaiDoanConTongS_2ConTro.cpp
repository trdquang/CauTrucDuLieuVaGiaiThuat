#include <bits/stdc++.h>
using namespace std;

//su dung ky thuat 2 con tro
int day_con(int a[], int n, int s){
	int res = -1;
	int l = 0, r;
	int sum = 0;
	for(r = 0; r < n; r++){
		sum += a[r];
		//dam bao day con co tong nho hon hoac bang s
		//truoc khi cap nhat ket qua
		while(sum > s){
			sum -= a[l];
			l++;
		}
		res = max(res, r - l + 1);
	}
	return res;
}

int main(){
	int n, s;
	cin >> n >> s;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	cout << day_con(a, n, s);
}
/*
7 20
2 6 4 3 6 8 9
*/