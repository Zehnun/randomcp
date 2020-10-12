#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string p1, p2;
	getline(cin, p1);
	getline(cin, p2);

	transform(p1.begin(), p1.end(), p1.begin(), ::tolower);
	transform(p2.begin(), p2.end(), p2.begin(), ::tolower);
	
	if(p1>p2)
		cout << 1 << endl;
	if(p1 < p2)
		cout << -1 << endl;
	if(p1 == p2)
		cout << 0 << endl;
	return 0;
}
