#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, n, z;
	cin >> x >> n;
	vector<int> d(102);
	for(int i = 0; i < n; i++){
		int p;
		cin >> p;
		d[p] = 1;
	}
	pair<int, int> ans(99999, -1);
	for(int i = 0; i <= 101; ++i){
		if(d[i] == 1) continue;
		int dif = abs(x - i);
		ans = min(ans, pair(dif, i));
	}
	cout << ans.second << endl;
	return 0;
}
