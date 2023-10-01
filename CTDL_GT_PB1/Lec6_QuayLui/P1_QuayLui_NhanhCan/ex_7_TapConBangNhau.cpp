#include <bits/stdc++.h>
using namespace std;


int n,s,a[100],x[100],ok;
int used[100];

void inp(){
	cin>>n>>s;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a,a+n+1);
	for(int i = 1; i <= n; i++)
		used[i] = false;
	ok=0;
}

void ql(int i,int k,int sum){
	if(sum==s){
		 
		for(int j=1;j<k;j++){
			cout<<x[j] << " ";
		 
		}
		cout<<"\n";
	 
	}
	for(int j=i;j<=n;j++){
		if(used[j] == 0 && sum+a[j]<=s){
			used[j]=1;
			x[k]=a[j];
			ql(j,k+1,sum+a[j]);
			used[j]=0;
		}
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a,a+n+1);
		for(int i = 1; i <= n; i++)
			used[i] = 0;
		ql(1,1,0);
		 
	}
}
/*
2
5 50
5 10 15 20 25
8 53
15 22 14 26 32 9 16 8
*/