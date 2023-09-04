#include <bits/stdc++.h>
using namespace std;

void in(int t, int c){
	if(c != 0)
		cout << t << " " << c << endl;
}

long long dao_nguoc(long long n){
	long long res = 0;
	while(n){
		res = res * 10 + n % 10;
		n /= 10; 
	}
	return res;
}

void lay_so(long long n){
	long long x = dao_nguoc(n);
	int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
	while(n){
		int r = n % 10;
		if(r == 2)
			c2++;
		else if(r == 3)
			c3++;
		else if(r == 5)
			c5++;
		else if(r == 7)
			c7++;
		n /= 10;
	}
	
	//tach x
	while(x){
		int r = x%10;
		if(r == 2){
			in(2, c2);
			c2 = 0;
		}else if(r == 3){
			in(3, c3);
			c3 = 0;
		}else if(r == 5){
			in(5, c5);
			c5 = 0;
		}else if(r == 7){
			in(7, c7);
			c7 = 0;
		}
		x /= 10;
	}
}

int main(){
	long long n;
	cin >> n;
	lay_so(n);
}