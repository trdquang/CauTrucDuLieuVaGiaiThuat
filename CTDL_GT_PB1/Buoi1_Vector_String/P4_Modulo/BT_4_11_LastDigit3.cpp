#include <bits/stdc++.h>
using namespace std;

int tim_so(string a, string n){
	int x = a[a.size()-1] - '0';

	if(x == 0||x == 1||x == 5||x == 6)
		return x;
	if(n.size() == 1)
		n = "0" + n;
	int y = (n[n.size()-2] - '0') * 10;
	y += n[n.size()-1] - '0';
	
	int r2[4] = {6, 2, 4, 8};
	int r3[4] = {1, 3, 9, 7};
	int r4[4] = {6, 4, 6, 4};
	int r7[4] = {1, 7, 9, 3};
	int r8[4] = {6, 8, 4, 2};
	int r9[4] = {1, 9, 1, 9};
	
	y %= 4;
	if(x == 2)
		return r2[y];
	if(x == 3)
		return r3[y];
	if(x == 4)
		return r4[y];
	if(x == 7)
		return r7[y];
	if(x == 8)
		return r8[y];
	if(x == 9)
		return r9[y];
}

int main(){
	string a, b;
	cin >> a >> b;
	cout << tim_so(a, b);
}
