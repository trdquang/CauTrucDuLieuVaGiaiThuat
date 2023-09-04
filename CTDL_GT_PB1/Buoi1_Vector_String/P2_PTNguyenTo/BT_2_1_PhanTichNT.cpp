#include <bits/stdc++.h>
using namespace std;

void phan_tich_1(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			while(n % i == 0){
				cout << i << " ";
				n /= i;
			}
		}
	}
	if(n > 1)
		cout << n << " ";
	cout << endl;
}

void phan_tich_2(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			cout << i << " ";
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n > 1)
		cout << n << " ";
	cout << endl;
}

void phan_tich_3(int n){
	for(int i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		if(n%i == 0){
			while(n % i == 0){
				n /= i;
				cnt++;
			}
		}
		if(cnt > 0){
			cout << i <<"("<<cnt<<")" <<" ";
		}
	}
	if(n > 1)
		cout << n << "(1)";
	cout << endl;
}

void phan_tich_4(int n){
	vector<int>v;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){	
			while(n % i == 0){
				n /= i;
				v.push_back(i);
			}
		}
	}
	if(n > 1)
		v.push_back(n);
	for(int i = 0; i < v.size()-1; i++)
		cout << v[i] << "x";
	cout << v[v.size()-1];
	cout << endl;
}

void phan_tich_5(int n){
	vector<int>v;
	for(int i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		if(n%i == 0){	
			while(n % i == 0){
				n /= i;
				cnt++;
			}
		}
		if(cnt != 0){
			v.push_back(i);
			v.push_back(cnt);
		}
	}
	if(n > 1){
		v.push_back(n);
		v.push_back(1);
	}
	
	printf("n = %d^%d", v[0], v[1]);
	for(int i = 2; i < v.size(); i+=2){
		printf(" * %d^%d ", v[i], v[i+1]);
	}
	cout << endl;
}

int main(){
	int n = 60;;
//	cin >> n;
	cout <<"Pt1: " ;
	phan_tich_1(n);
	cout <<"\nPt2: " ;
	phan_tich_2(n);
	cout <<"\nPt3: " ;
	phan_tich_3(n);
	cout <<"\nPt4: " ;
	phan_tich_4(n);
	cout <<"\nPt5: " ;
	phan_tich_5(n);
}