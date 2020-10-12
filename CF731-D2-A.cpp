#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str; cin >> str;
	int d = 0;
	char j = 'a';

	for(int i = 0; i < str.length(); i++){
		if(abs(int(j) - int(str[i])) > (26/2))
			d += 26 - abs(int(j) - int(str[i]));
		else
			d += abs(int(j) - int(str[i]));
		j = str[i];
	}
	cout << d << endl;


			


	return 0;
}
