#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, t, x, g = 0; cin >> t;
	cin >> a;
	for(int i =0; i < t -1; i++){
		cin >> x;
		if(a != x)
			g++;
		a = x;
	}
	cout << g + 1 << endl;
	return 0;
}
