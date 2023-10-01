#include <iostream>

using namespace std;

int a[100], n;
bool used[100];

void sinh_hv(int i){
	for(int j = 1; j <= n; j++){
		//______________________________
		if(used[j] == false){
			a[i] = j;
			used[j] = true;
			
			if(i == n){
				//result();
				for(int i = 1; i <= n; i++)
					cout << a[i];
				cout << endl;
			}
			else
				sinh_hv(i + 1);
			
			//______________________________
			used[j] = false;
		}
		
	}	
}

int main(){
	cin >> n;
	memset(used, false, sizeof(used));
	sinh_hv(1);
}