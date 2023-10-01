#include <bits/stdc++.h>
#include <set>
using namespace std;

void tim_xau_con(string s1, string s2){
	char dem1[256] = {0}, dem2[256] = {0};
	//dem tan xuat cac ky tu trong s2
	for(char c: s2){
		dem2[c]++;
	}
	
	//tim doan con trong 1
	int ans = INT_MAX, left = 0, cnt = 0, index = -1;
	//ans de luu do dai chuoi ngan nhat
	//left la con tro thu nho chuoi
	//cnt la bien dem xem so ky tu xuat hien trong s1
	//index de luu vi tri bat dau
	for(int i = 0; i < s1.size(); i++){
		dem1[s1[i]]++;
		//cap nhat bien dem trong truong hop no nho hon hoac bang
		if(dem1[s1[i]] <= dem2[s1[i]])	cnt++;
		if(cnt == s2.length()){
			while(dem1[s1[left]] > dem2[s1[left]] || dem2[s1[left]] == 0){
				if(dem1[s1[left]] > dem2[s1[left]])
					dem1[s1[left]]--;
				left++;
			}
			if(i - left + 1 < ans){
				ans = i - left + 1;
				index = left;
			}
		}
		 
	}
	if(index == -1)
		cout << -1 << endl;
	else
		cout << s1.substr(index, ans) << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		tim_xau_con(s1, s2);
	}
}
/*
2
timetopractice
toc
zoomlazapzo
oza
*/