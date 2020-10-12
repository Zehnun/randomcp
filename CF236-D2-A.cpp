#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string user;
	int j = 0;
	getline(cin, user);
	sort(user.begin(), user.end());
	for (int i = 0; i < user.length(); i++){
		if(user[i] != user[i + 1])
			j++;
	}
	if(j % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;

	return 0;
}
