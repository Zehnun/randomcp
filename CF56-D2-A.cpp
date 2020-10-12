#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	int j = 0;
	getline(cin, str);

	for(int i = 0; i < str.length(); i++)
		if(isupper(str[i]))
			j++;

	if(j > (str.length()/2)){
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		cout << str << endl;
	}else{
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		cout << str << endl;
	}
	return 0;
}
