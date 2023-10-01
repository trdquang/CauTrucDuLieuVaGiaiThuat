#include <bits/stdc++.h>
using namespace std;

vector<int> sang_bd(){
	vector<int>v(100001);
	for(int i = 0; i <= 100000; i++)
		v[i] = i;
	
	for(int i = 2; i <= sqrt(100000); i++){
		if(v[i] == i){
			for(int j = i*i; j <= 100000; j+=i){
				if(v[j] == j){
					v[j] = i;
				}
			}	
		}
	}
		
	return v;
}

int main(){
	vector <int> v = sang_bd();
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		while(n != 1){
			int cnt = 0;
			int tmp = v[n];
			while(n % tmp == 0){
				cnt++;
				n/=tmp;
			}
			printf("%d(%d) ", tmp, cnt);
		}
		if(n > 1)
			printf("%d(%d)", n, 1);
		cout << endl;
	}
}