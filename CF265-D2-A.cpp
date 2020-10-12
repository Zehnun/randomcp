#include <bits/stdc++.h>
using namespace std;
/*
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	string c; cin >> c;
	
	int m = 1;

	int i = 0;
	int y = 0;
	int j = c.length() + 1;
	while(j > 0){
		if(c[i] == s[y]){
			m++;
			i++;
			y++;
			j--;
		}
		else
			i++;
			j--;
	}
	cout << m  << endl;


	return 0;
}
*/
// solution

int main(){

	string s, c;
	cin >> s >> c;
	int pos = 0;

	for(int i = 0; i < c.length(); i++)
		if(s[pos] == c[i])
			pos++;
	cout << pos + 1 << endl;
	return 0;
}
