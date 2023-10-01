#include <bits/stdc++.h>
using namespace std;

int is_lower(char c){
	if(c <= 'z' && c >='a')
		return 1;
	return 0;
}

int is_upper(char c){
	if(c <= 'Z' && c >='A')
		return 1;
	return 0;
}

int is_alpha(char c){
	if( (c <= 'Z' && c >='A') || (c <= 'z' && c >= 'a') )
		return 1;
	return 0;
}

int is_digit(char c){
	if(c <= '9' && c >='0')
		return 1;
	return 0;
}

char to_lower(char c){
	if(is_lower(c))
		return c;
	return c + 32;
}

char to_upper(char c){
	if(is_upper(c))
		return c;
	return c - 32;
}

int strlen(char a[]){
	int cnt = 0;
	int i = 0;
	while(a[i] != '\0'){
		cnt ++;
		i++;
	}
	return cnt;
}

char* strlwr(char c[]){
	for(int i = 0; i < strlen(c); i++)
		c[i] = to_lower(c[i]);
	
	return c;
}

char* strupr(char c[]){
	for(int i = 0; i < strlen(c); i++)
		c[i] = to_upper(c[i]);
	
	return c;
}

int strcmp(char a[], char b[]){
	int len = min(strlen(a), strlen(b));
	for(int i = 0; i < len; i ++){
		if(to_lower(a[i]) < to_lower(b[i]))
			return -1;
		else if(to_lower(a[i]) > to_lower(b[i]))
			return 1;
	}
	if(strlen(a) > strlen(b))
		return 1;
	else if(strlen(a) < strlen(b))
		return -1;
	else 
		return 0;
}

long long atoll(char a[]){
	try{
		long long res = 0;
		for(int i = 0; i < strlen(a); i++){
			if(is_digit(a[i]))
				res = res * 10 +  a[i] - '0';
			else
				throw (-1);
		}
		return res;
	}catch(int var){
		return -1;
	}
}

char* strev(char s[]){                   
	int l = 0, r = strlen(s) - 1;
	while(l < r){
		swap(s[l], s[r]);
		l ++;
		r--;
	}
	return s;
}

int main(){
	char c;
	cout << "Ky tu: ";
	cin >> c;
	cin.ignore();
	cout <<c<<" is lower: " << is_lower(c) << endl;
	cout <<c<<" is upper: " << is_upper(c) << endl;
	cout <<c<<" is alpha: " << is_alpha(c) << endl;
	cout <<c<<" is digit: " << is_digit(c) << endl;
	cout <<c<<" to lower: " << to_lower(c) << endl;
	cout <<c<<" to upper: " << to_upper(c) << endl;
	
	char s[100], s1[100], s2[100], s3[100];
	cout << "\nXau 1: ";
	gets(s);
	cout <<"length: " << strlen(s) << endl;
	cout <<"strlwr: " << strlwr(s) << endl;
	cout <<"strupr: " << strupr(s) << endl;
	
	cout <<"\nXau 2: ";
	gets(s1);
	cout << "strcom(s, s1): " << strcmp(s, s1) << endl;
	
	cout <<"\nXau 3: ";
	gets(s2);
	cout << "atoll = " << atoll(s2) << endl;
	
	cout <<"\nXau 4: ";
	gets(s3);
	cout << "strev = " << strev(s3) << endl;
}