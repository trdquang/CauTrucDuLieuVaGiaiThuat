/*
Tim so lon nhat va be nhat co m chu so co tong bang  s
- Dieu kien khong the xay ra
	s > m * 9
	s = 0 va m >= 2
*/
#include <bits/stdc++.h>
using namespace std;

int kiem_tra(int m, int s){
	if(s > 9 * m)
		return 0;
	if(s == 0 && m >= 2)
		return 0;
	return 1;
}

int main(){
	int m, s;
	cin >> m >> s;
	if(kiem_tra(m, s) == 0){
		cout << "-1 -1";
		return 0;
	}
	
	vector<int>lon(m, 0);
	vector<int>be(m, 0);
	
	int tmp = s;
	//Tim so lon
	for(int i = 0; i < m; i++){
		if(tmp >= 0){
			lon[i] = min(tmp, 9);
		}else
			break;
		tmp -=9;
	}
	
	//Tim so be
	tmp = s - 1;
	for(int i = m - 1; i >= 0; i--){
		if(tmp >= 0){
			be[i] = min(9, tmp);
			tmp -= 9;
		}
	}
	be[0] ++;
	//in ra
	for(int i = 0; i < m; i++)
		cout << lon[i];
	cout << " ";
	for(int i = 0; i < m; i++)
		cout << be[i];
}
//2 15