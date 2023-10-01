#include <bits/stdc++.h>
using namespace std;

int n, a[100], ok;

void init(){
	for(int i = 1; i <= n; i++)
		a[i] = i;
}

void next(){
	//tim vi tri gay khuc dau tien (tu cuoi ve)
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		--i;
	}
	if(i == 0)
		ok = 0;
	else{
		//tim a[j] nho nhat nhung lon hon a[i]
		int j = n;
		while(a[i] > a[j]){
			--j;
		}
		swap(a[i], a[j]);
		//lat nguoc doan phia sau
//		int l = i + 1, r = n;
//		while(l < r){
//			swap(a[l], a[r]);
//			l++;
//			r--;
//		}
		
		//ham co san lat nguoc: reverse
		reverse(a + i + 1, a + n + 1);
	}
}

int main(){
	cin >> n;
	init();
	ok = 1;
	while(ok){
		for(int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;
		next();
	}
}