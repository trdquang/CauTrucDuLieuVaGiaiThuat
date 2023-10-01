#include <bits/stdc++.h>
using namespace std;

//cnt la so luog so hang 

int a[100], n, ok, cnt;

void init(){
	a[1] = n;
	cnt = 1;
}

void next(){
	//bat dau tu so hang cuoi cung, neu gap so khac 1 thi giam 1 dv
	//bieu dien tong con lai bang gia tri so do sau khi giam
	int i = cnt;
	while(i >= 1 && a[i] == 1)
		i--;
	
	if(i == 0)
		ok = 0;
	else{
		//giam so tim thay di 1 dv
		a[i]--;
		//dem so luong so 1 da bo qua
		int d = cnt - i + 1;
		//cap nhat cnt
		cnt = i;
		
		//bieu dien qua so sau khi giam
		int q = d/a[i];
		int r = d%a[i];
		if(q){
			for(int j = 1; j <= q; j++)
				a[i + j] = a[i];
			//cnt (so luong so hang duoc cap nhat)
			cnt += q;
		}
		if(r){
			a[cnt + 1] = r;
			//cap nhat cnt
			cnt++;
		}
	}
}

int main(){
	cin >> n;
	ok = 1;
	init();
	while(ok){
		for(int i = 1; i <= cnt; i++)
			cout << a[i] << " ";
		cout << endl;
		next();
	}
} 